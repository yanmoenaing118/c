#include <stdio.h>

int main()
{

	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("Fahrenheit\tCelsius\n");
	for (fahr = upper; fahr >= lower; fahr -= step)
		printf("%10.0f\t%7.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

	return 0;
}
