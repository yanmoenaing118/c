#include <stdio.h>

#define MAXLINE 1000

int my_getline(char line[], int limit);
void copy(char to[], char from[]);

int main()
{
    int len = 0;
    char line[MAXLINE];
    char max_line[MAXLINE];
    int curr_len = 0;

    while ( ( len = my_getline(line, MAXLINE)   ) > 0 )
    {
        if(len > curr_len)
        {
            curr_len =len;
            copy(max_line, line);
        }
        
    }
    printf("%s\n", max_line);
}


int my_getline(char line[], int limit) 
{
    int i;
    int c;

    for(i = 0; i < limit - 1 && ( c = getchar() ) != EOF && c != '\n'; ++i ) line[i] = c;

    if( c == '\n') 
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}

void copy(char to[], char from[])
{
    int i;
    for(i = 0;(to[i] = from[i]) != '\0'; ++i);
}