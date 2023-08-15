#include <stdio.h>

int power(int, int);

int main()
{

	printf("2 power table\n");

	for(int i = 0; i < 13; i++)
	{

		printf("2 x %2d = %5d\n",i, power(-2, i));

	}

}


int power(int base, int power) 
{
	int i, p;
	p = 1;
	for(i = 0 ; i < power; i++)
	{
		p = p * base;
	}

	return p;
}