#include <stdio.h>

int main()
{

    int c;
    char prev_c;
    char is_whitespace = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            is_whitespace = 1;
            prev_c = c;
        }
        else
        {

            if (is_whitespace)
            {
                putchar('\n');
            }

            putchar('#');
            is_whitespace = 0;

        }

        if(is_whitespace && prev_c == '\n') {
            putchar('\n');
            is_whitespace = 0;
        }
    }

    if (c == '\n')
    {
        putchar(c);
    }

    return 0;
}