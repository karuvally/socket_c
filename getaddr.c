// include the serious stuff
#include<stdio.h>
#include<stdlib.h>
#include<arpa/inet.h>
#include<netdb.h>
#include<string.h>

// the main function
int main()
{
	// essential variables
	struct addrinfo hints, *result;
	char addr_str[100];

	// initialize hints to zero
	memset(&hints, 0, sizeof(hints));

	// setup specification
	hints.ai_family = PF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_flags |= AI_CANONNAME;

	// try to get the address
	getaddrinfo("ThinkPad-L440", NULL, &hints, &result);

	// quit if result is invalid
	if(result == NULL) {
		printf("FATAL: Could not retrieve address");
		exit(1);
	}

	// convert data to presentation style
	inet_ntop(result->ai_family, result->ai_addr->sa_data, addr_str, 100);

	// return zero like a gentle program
	return 0;
}
