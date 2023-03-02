#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
 
#define BUF_SIZE 1024
#define PROT     5555
#define REMOTE_ADDR     "127.0.0.1"
 
int main(int argc, char *argv[])
{
    //建立套接字
    int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);           //IPV4,数据报套接字类型,不指定协议
    if (sock_fd < 0) { 
        perror("Create Socket Failed:"); 
        exit(1); 
    } 
 
    // 对端地址设置
    struct sockaddr_in server_addr; 
    bzero(&server_addr, sizeof(server_addr)); 
    server_addr.sin_family = AF_INET; 
    server_addr.sin_addr.s_addr = inet_addr(REMOTE_ADDR); 
    server_addr.sin_port = htons(PROT); 
 
    //发送数据
    char buf[BUF_SIZE] = { 0 };
    int count = 0;
    while (1)
    {
        memset(buf,0, BUF_SIZE);
        sprintf(buf, "%d",count);
        printf("udp client send:[%s - %d]:%s\n",REMOTE_ADDR, PROT, buf);
        sendto(sock_fd, buf, strlen(buf), 0, (const struct sockaddr*)&server_addr, sizeof(server_addr));
        count++;
        sleep(1);
    }
 
    //关闭套接字
    close(sock_fd);
 
    return 0;

}