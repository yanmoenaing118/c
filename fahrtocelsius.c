#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{

	float fahr, celsius;

	fahr = LOWER;

	printf("Fahrenheit\tCelsius\n");
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
		printf("%10.0f\t%7.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

	return 0;
}
