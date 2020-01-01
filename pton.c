// include the serious stuff
#include<stdio.h>
#include<arpa/inet.h>

int main()
{
	// essential values
	struct sockaddr_in sock_addr;
	struct sockaddr_in6 sock_addr6;
	
	// assign an IPv4 addresss
	int ipv4_result = inet_pton(AF_INET, "192.168.0.1", &(sock_addr.sin_addr));

	// assign an IPv6 address
	int ipv6_result = inet_pton(
		AF_INET6, "2001:db88:63b3:1::3490", &(sock_addr6.sin6_addr)
	);

	// debug
	printf("IPv4 %d\n", ipv4_result);
	printf("IPv6 %d\n", ipv6_result);

	// return zero, like a gentle program
	return 0;
}
