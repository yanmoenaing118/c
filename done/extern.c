#include <stdio.h>

#define MAX_LINE 1000

/**
 * External variables are defined which can be accessed by any functions
 * This set aside the storage for it.
 */
char line[MAX_LINE];
char longest[MAX_LINE];

int get_line(void);
void copy(void);
void print_longest_line_length(void);

int main()
{

	int len = 0;
	extern int max;

	max = 0;

	while ((len = get_line()) > 0)
	{

		if (len > max)
		{
			max = len;
			copy();
		}
	}

	printf("Max line is \n");
	printf("%s", longest);

	print_longest_line_length();

	return 0;
}

int get_line(void)
{
	int i = 0;
	int c;

	while ((c = getchar()) != '\n' && c != EOF)
	{
		line[i++] = c;
	}

	if (c == '\n')
	{
		line[i] = '\n';
		i++;
	}

	line[i] = '\0';
	return i;
}

void copy(void)
{
	int i = 0;
	extern char longest[], line[];
	while ((longest[i] = line[i]) != '\n')
		i++;
}

void print_longest_line_length(void) {
	extern int max;
	printf("LONGEST LINE LENGTH: %d\n", max);
}



