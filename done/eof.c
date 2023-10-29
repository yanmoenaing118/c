#include <stdio.h>

int main() {
	int c;

	if(EOF == -1) {
		printf("EOF is -1\n");
	}

	c = getchar() == EOF;

	if(c ==0) {
		printf("This is not EOF %d\n", c);
	}
	if(c == 1) {
		printf("This is EOF %d\n", c);
	}
	return 0;
}

