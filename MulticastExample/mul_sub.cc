#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFLEN 1024
#define GROUP_IP	"239.255.0.1"
#define GROUP_PORT 7400


int main (int argc, char **argv)
{
	int fd = socket(AF_INET, SOCK_DGRAM, 0);
	if(fd == -1) {
		printf("create udp socket error %d", -errno);
		return -1;
	}

	// set up the local address
	struct sockaddr_in addr;
	memset(addr.sin_zero, 0, sizeof(addr.sin_zero));
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = htonl(INADDR_ANY);
	addr.sin_port = htons(GROUP_PORT);  //this port must be the group port

	// bind local address
	int ret = bind(fd, (const struct sockaddr *)&addr, sizeof(addr));
	if (ret < 0) {
		printf("Bind socket error, ret=%d\n", ret);
		return -1;
	}

	/* 加入组播 */
	struct ip_mreq mreq;
	mreq.imr_multiaddr.s_addr=inet_addr(GROUP_IP);
	mreq.imr_interface.s_addr=htonl(INADDR_ANY);
	ret = setsockopt(fd,IPPROTO_IP,IP_ADD_MEMBERSHIP,&mreq,sizeof(mreq));
	if (ret < 0) {
		printf("setsockopt: IP_ADD_MEMBERSHIP error, ret=%d\n", ret);
		return -1;
	}

	printf("create rtp udp socket %d ok\n",fd);


	while (1)
	{
		// 用于保存对端的地址信息
        struct sockaddr_in cliaddr;
        socklen_t cliaddrlen = sizeof(cliaddr);
        bzero(&cliaddr, cliaddrlen);

        // 用于保存接收的数据
        char buf[BUFLEN]; 
        bzero(buf, BUFLEN);

        if (recvfrom(fd, buf, BUFLEN, 0, (struct sockaddr *)&cliaddr, &cliaddrlen) <0 ) {
            perror("Receive Data Failed:"); 
            exit(1); 
        }

        printf("udp server from [%s - %hu]:%s\n",inet_ntoa(cliaddr.sin_addr),cliaddr.sin_port,buf);


	}

	close(fd);
	return 0;
}