#include <stdio.h>


#define IN 1
#define OUT -1

int main()
{
	int ch, i, nwhite, nothers;
	int ndigit[10];

	nwhite = nothers = i = 0;

	for(i = 0; i < 10; ++i) ndigit[i] = 0;

	while((ch = getchar()) != EOF) 
	{

		if( ch >= '0' && ch <= '9' ) 
		{
			ndigit[ch - '0']++;
		} else if ( ch == ' ' || ch == '\n' || ch == '\t')
		{
			nwhite++;
		} else {
			nothers++;
		}

	}

	printf("Digits:\n");

	for(i = 0 ; i < 10; i++)
	{
		printf("occurance of %i = %d, \n",i, ndigit[i]);
	}

	printf("white space = %d, others = %d\n", nwhite, nothers);
	return 0;
}
