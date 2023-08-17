#include <stdio.h>

#define MAX_LINE 1000

int get_line(char line[]);
void copy(char from[],char to[]);

int main()
{

	char line[MAX_LINE];
	char longest[MAX_LINE];

	get_line(line);
	copy(line, longest);

	printf("%s\n", line);
	printf("%s\n", longest);

	return 0;
}

int get_line(char line[])
{
	int ch;
	int i = 0;
	for (i = 0; i < MAX_LINE - 1 && (ch = getchar()) != '\n'; i++)
	{
		line[i] = ch;
	}

	if (ch == '\n')
	{
		line[i] = ch;
		i++;
	}

	line[i] = '\0';

	return i;
}

void copy(char from[], char to[])
{
	int i = 0;
	while ((to[i] = from[i++]) != '\0')
		;
}