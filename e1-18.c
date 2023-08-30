#include <stdio.h>

#define MAX_LINE 1000

int get_line(char line[], int limit);
void copy(char from[], char to[]);
void reverse(char line[]);

int main()
{

    int len = 0;
    char line[MAX_LINE];

    while ((len = get_line(line, MAX_LINE)) > 0)
    {
        printf("%s", line);
        reverse(line);
        printf("%s", line);
    }

    return 0;
}

int get_line(char line[], int limit)
{
    int i = 0;
    int j = 0;
    int c;
    for (i = 0; i < limit - 1 && (c = getchar()) != '\n' && c != EOF; i++)
    {
        line[i] = c;
    }

    j = i;

    while (line[j - 1] == '\t' || line[j - 1] == ' ')
    {
        j--;
    }

    i = j;

    line[i] = '\n';
    line[++i] = '\0';

    return i;
}

void copy(char from[], char to[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        i++;
    }
    
}

void reverse(char line[]) {
    int len = 0;
    int i = 0;
    int j = 0;
    char copyied[MAX_LINE];

    while (line[i] != '\n')
    {
        i++;
    }

    --i;

    for (j = 0; j <= i; j++)
    {
        copyied[j] = line[i - j];
    }

    copyied[j] = '\n';
    j++;
    copyied[j] = '\0';

    copy(copyied, line);
}