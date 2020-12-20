#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

#define MAXINPUT 100

int main(void) {

	fd_set rfds;
	int selectReturnValue;
	char input[MAXINPUT];

	/* Watch stdin (fd 0) to see when it has input. */
	FD_ZERO(&rfds);
	FD_SET(0, &rfds);

	while (1) {

		selectReturnValue = select(1, &rfds, NULL, NULL, NULL);

		if (selectReturnValue == -1) {
			perror("select()");
		}

		if (fgets (input, MAXINPUT, stdin) == NULL ) {
			puts("fgets error");
		}

		if(FD_ISSET(0, &rfds)) {
			printf("You have entered an input.\n");
		}

	}

    return 0;
}
