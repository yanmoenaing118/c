#include <stdio.h>

#define IN 1
#define OUT -1

/**
 *
 * my version of word count program
 */

int main()
{
    int ch;

    int STATE = OUT;

    unsigned long wc = 0;

    while ((ch = getchar()) != EOF)
    {
        if (ch != '\n' && ch != ' ' && ch != '\t')
        {
            if (STATE == OUT)
                ++wc;
            STATE = IN;
            putchar('#');
        }
        else
        {
            STATE = OUT;
            putchar('\n');
        }
    }

    return 0;
}