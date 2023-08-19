#include <stdio.h>

#define MAX_LINE 1000

int get_line(char line[]);
void copy(char from[],char to[]);

int main()
{

	char line[MAX_LINE];
	char longest[MAX_LINE];
	int max = 0;
	int length = 0;

	
	while (( length = (get_line(line)) > 1))
	{
		if(length > max) 
		{
			max = length;
			copy(line, longest);
		}
	}
	
	printf("longest sentence\n");
	printf("%s", longest);


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
	while ((to[i] = from[i]) != '\0') i++;
}