#include <stdio.h>


#define IN 1
#define OUT -1

int main()
{
	long nl;
	int c;
	int STATE;

	long bl;

	nl = bl = 0;
	STATE = OUT;


	while( (c = getchar()) != EOF ) 
	{
		if( c == '\n' || c == ' ' || c == '\t')
		{ 
			STATE = OUT;
		} else if( STATE == OUT ) {
			STATE = IN;
			++bl;
		}
	}

	printf("Total World Count: %ld\n", bl);

	return 0;
}
