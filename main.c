#include <stdio.h>
#define MAXLINE 5
int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{

    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;
    while ((len = my_getline(line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%s\n", longest);
    for (int i = 0; i < max; i++)
    {
        if (longest[i] == '\n')
        {
            printf("FOUND\n");
        }
    }

    return 0;
}

int my_getline(char s[], int lim)
{

    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}