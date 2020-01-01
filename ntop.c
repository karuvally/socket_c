// include the serious stuff
#include<stdio.h>
#include<arpa/inet.h>

// the main function
int main()
{
	// essential variables
	struct sockaddr_in6 sock_addr;

	// store an IPv6 address into sock_addr
	inet_pton(
		AF_INET6, "2001:db88:63b3:1::3490", &(sock_addr.sin6_addr)
	);

	// return zero, like a gentle program
	return 0;
}
