// include the serious stuff
#include<stdio.h>
#include<arpa/inet.h>
#include<netdb.h>
#include<string.h>

// the main function
int main()
{
	// essential variables
	struct addrinfo hints, *result;

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
		exit(1)
	}

	// return zero like a gentle program
	return 0;
}
