// attempt to write a working getaddrinfo() code
// Aswin Babu Karuvally (github.com/karuvally)

// include the serious stuff
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netdb.h>

// the main function
int main()
{
	// essential variables
	int status;
	struct addrinfo hints;
	struct addrinfo *server_info;

	// initialize hints
	memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_UNSPEC; // who knows whether its IPv4 or IPv6
	hints.ai_socktype = SOCK_STREAM; // we like TCP :D
	hints.ai_flags = AI_PASSIVE; // get current IP automatically

	// get address related info
	status = getaddrinfo(NULL, "22", &hints, &server_info);

	// exit if something went wrong
	if(status != 0) {
		fprintf(
			stderr,
			"FATAL: getaddrinfo error %s occured\n",
			gai_strerror(status)
		);
		exit(1);
	}

	// return zero like a gentle program
	return 0;
}
