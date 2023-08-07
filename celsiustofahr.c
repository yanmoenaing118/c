#include <stdio.h>

int main() {

	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 150;
	step = 5;

	celsius = lower;

	printf("Celsius\tFahrenheit\n");
	while (celsius <= upper)
	{
		fahr = (celsius * 9.0) / 5.0 - 32;
		printf("%7.0f\t%10.1f\n", fahr, celsius);
		celsius = celsius + step;
	}
	

	return 0;
}

