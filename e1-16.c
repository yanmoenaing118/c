#include <stdio.h>

#define MAX_LENGTH 1000

int get_line(char line[], int limit);
void copy(char from[], char to[]);

int main()
{
    int len;
    int max;
    char longest[MAX_LENGTH];
    char line[MAX_LENGTH];

    max = 0;

    while ((len = get_line(line, MAX_LENGTH)) > 1)
    {
        if (len > max)
        {
            printf("%s", line);
        }

        max = len;
    }

    return 0;

}

int get_line(char line[], int limit)
{
    int c;
    int i = 0;

    for (i = 0; i < limit - 1 && (c = getchar()) != '\n' && c != EOF; i++)
            line[i] = c;

    if (c == '\n')
    {
            line[i] = c;
            i++;
    }

    line[i] = '\0';

    return i;
}

void copy(char from[], char to[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ;
}