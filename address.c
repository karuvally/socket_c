// include the serious stuff
#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>

int main()
{
	// essential values
	struct sockaddr_in sock_addr;
	
	// assign an IPv4 addresss
	inet_pton(AF_INET, "192.168.0.1", &(sock_addr));

	// return zero, like a gentle program
	return 0;
}
