// include the serious stuff
#include<stdio.h>
#include<arpa/inet.h>

// the main function
int main()
{
	// essential variables
	struct sockaddr_in6 sock_addr;
	char ipv6[INET6_ADDRSTRLEN];

	// store an IPv6 address into sock_addr
	inet_pton(
		AF_INET6, "2001:db88:63b3:1::3490", &(sock_addr.sin6_addr)
	);

	// extract the IP address stored above
	inet_ntop(AF_INET6, &(sock_addr.sin6_addr), ipv6, INET6_ADDRSTRLEN);

	// print the extracted IP address
	printf("IPv6: %s\n", ipv6);

	// return zero, like a gentle program
	return 0;
}
