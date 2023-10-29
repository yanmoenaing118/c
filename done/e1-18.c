#include <stdio.h>

#define MAX_LINE 1000

int get_line(char line[], int limit);
void copy(char from[], char to[]);
void reverse(char line[]);

int main()
{

    int len = 0;
    char line[MAX_LINE];
    char test[10] = "yanmoe\n";   

    printf("%s", test);
    // while ((len = get_line(line, MAX_LINE)) > 0)
    // {
    //     printf("%s", line);
    //     reverse(line);
    //     printf("%s", line);
    // }

    return 0;
}


/**
 * remove blank and trailing characters
*/
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
