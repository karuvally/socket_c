// include all the serious stuff
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// the main function
int main()
{
	// declare a character pointer 
	char *test_ptr;

	// allocate memory for the pointer
	test_ptr = malloc(16);

	// debug
	strcpy(test_ptr, "This works!");
	printf("%s\n", test_ptr);

	// fill the shiny new memory locations with zero
	memset(test_ptr, '0', 12);
	printf("%s\n", test_ptr);

	// return zero like all those cool programs 
	return 0;
}
