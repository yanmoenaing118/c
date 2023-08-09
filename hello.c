#include <stdio.h>

int main()
{
	long nl;
	int c;
	int prevChar;

	nl = 0;
	printf("Enter sentences\n");

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			++nl;
		prevChar = c;
	}

	if( c == EOF && prevChar != '\n') {
		++nl;
	}

	printf("%ld\n", nl);

	return 0;
}
