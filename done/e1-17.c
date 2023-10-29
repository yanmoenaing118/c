#include <stdio.h>

#define MAX_LINE 1000
#define CHARS_LENGTH 80

int get_line(char line[], int limit);
void copy(char from[], char to[]);

int main()
{

    char line[MAX_LINE];
    int len = 0;


    while((len = get_line(line, MAX_LINE)) > 0) {
        if(len > CHARS_LENGTH) {
            printf("%s", line);
        }
    }

    return 0;
}

int get_line(char line[], int limit)
{
    int i = 0;
    int c;

    for (i = 0; i < limit - 1 && (c = getchar()) != '\n' && c != EOF; i++)
    {
        line[i] = c;
    }

    if (c == '\n')
    {
        line[i] = c;
        i++;
    }

    line[i] = '\0';

    return i;
}

void copy(char from[], char to[]) {
    int i =0;
    while((to[i] = from[i]) != '\0') i++;
}