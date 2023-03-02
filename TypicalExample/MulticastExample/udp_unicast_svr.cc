#include<sys/types.h> 
#include<sys/socket.h> 
#include<unistd.h> 
#include<netinet/in.h> 
#include<arpa/inet.h> 
#include<stdio.h> 
#include<stdlib.h> 
#include<errno.h> 
#include<netdb.h> 
#include<stdarg.h> 
#include<string.h> 
 
#define BUF_SIZE   1024
#define PORT       5555
 
int main(int argc, char *argv[])
{
    //建立套接字
    int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);           //IPV4,数据报套接字类型,不指定协议
    if (sock_fd < 0) { 
        perror("Create Socket Failed:"); 
        exit(1); 
    } 
 
    //说明本服务器地址
    struct sockaddr_in addr;
    bzero(&addr,sizeof(addr));
	addr.sin_family=AF_INET;                         //协议类型IPV4
	addr.sin_addr.s_addr=htonl(INADDR_ANY);          //IP地址-任意地址
	addr.sin_port=htons(PORT);                       //端口号-网络字节序I

    //绑定地址
    if (bind(sock_fd, (struct sockaddr *)&addr, sizeof(addr)) < 0 ) {
        perror("Server Bind Failed:"); 
        exit(1); 
    }
 
    //接收数据

    while (1)
    {
        // 用于保存对端的地址信息
        struct sockaddr_in cliaddr;
        socklen_t cliaddrlen = sizeof(cliaddr);
        bzero(&cliaddr, cliaddrlen);

        // 用于保存接收的数据
        char buf[BUF_SIZE]; 
        bzero(buf, BUF_SIZE);

        if (recvfrom(sock_fd, buf, BUF_SIZE, 0, (struct sockaddr *)&cliaddr, &cliaddrlen) <0 ) {
            perror("Receive Data Failed:"); 
            exit(1); 
        }

        printf("udp server from [%s - %hu]:%s\n",inet_ntoa(cliaddr.sin_addr),cliaddr.sin_port,buf);
    }
 
    //关闭套接字
    close(sock_fd);
 
    return 0;

}