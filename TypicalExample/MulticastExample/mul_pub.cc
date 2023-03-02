#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
 
#define BUF_SIZE       1024
#define GROUP_PROT     7400
#define GROUP_ADDR    "239.255.0.1"
 
int main(int argc, char *argv[])
{
    // 建立套接字
    int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);           //IPV4,数据报套接字类型,不指定协议
    if (sock_fd < 0) { 
        perror("Create Socket Failed:"); 
        exit(1); 
    }

	struct sockaddr_in dstaddr;
	bzero(&dstaddr,sizeof(dstaddr));
	dstaddr.sin_family = PF_INET;
	dstaddr.sin_port = htons(GROUP_PROT);
	dstaddr.sin_addr.s_addr = inet_addr(GROUP_ADDR);


    //发送数据
    char buf[BUF_SIZE] = { 0 };
    int count = 0;
    while (1)
    {
        memset(buf,0, BUF_SIZE);
        sprintf(buf, "%d",count);
        printf("udp client send:[%s - %d]:%s\n",GROUP_ADDR, GROUP_PROT, buf);

        if (sendto(sock_fd, buf, strlen(buf), 0, (const struct sockaddr*)&dstaddr, sizeof(dstaddr)) <0) {
			perror("sendto Failed:"); 
        	exit(1);
		}
        count++;
        sleep(1);
    }
 
    //关闭套接字
    close(sock_fd);
 
    return 0;

}