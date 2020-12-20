#include <stdio.h>

int main() {

	char msg[60];
	printf("Enter your message\n");

	/*
	char *fgets(char *str, int n, FILE *stream)

	Arguments:
	1. str − This is the pointer to an array of chars where the string read is stored.
	2. n − This is the maximum number of characters to be read (including the final null-character). Usually, the length of the array passed as str is used.
	3. stream − This is the pointer to a FILE object that identifies the stream where characters are read from. 
	stdin can be used as the argument to read from the standard input.

	Return value:
	On success, the function returns the same str parameter. 
	If the End-of-File is encountered and no characters have been read, the contents of str remain unchanged and a null pointer is returned.
	If an error occurs, a null pointer is returned.
	*/

	if( fgets (msg, 60, stdin)!=NULL ) {
		puts(msg);
	}

	return 0;
}
