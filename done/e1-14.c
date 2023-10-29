#include <stdio.h>

#define TOTAL_ASCII_CHARS 256

int main()
{

    int ch;
    int nchars[TOTAL_ASCII_CHARS];
    int longest;
    int chars;
    int longest_copy;

    longest = longest_copy = chars = 0;

    for (int i = 0; i < TOTAL_ASCII_CHARS; i++)
        nchars[i] = 0;

    while ((ch = getchar()) != EOF)
    {

        nchars[ch]++;
    }

    printf("Horizontal histogram\n");

    for (int i = 0; i < TOTAL_ASCII_CHARS; i++)
    {
        if ((char)i == '\n')
            continue;
        if (nchars[i] == 0)
            continue;

        printf("%c ", i);

        chars++;

        if (nchars[i] > longest)
            longest = nchars[i];

        for (int j = 0; j < nchars[i]; j++)
        {
            putchar('#');
        }
        printf("\n");
    }

    longest_copy = longest;

    printf("Vertical histogram\n");
    for (int i = 0; i < longest; i++)
    {
        for (int j = 0; j < TOTAL_ASCII_CHARS; j++)
        {
            if (nchars[j] == 0 || (char)j == '\n')
                continue;
            if (longest_copy - nchars[j] <= 0)
            {
                putchar('#');
            }
            else
            {
                putchar(' ');
            }
        }
        if (i == longest - 1)
        {
            putchar('\n');
            for( int j = 0 ; j < TOTAL_ASCII_CHARS; j++)
            {
                if(nchars[j] == 0 || (char)j == '\n') continue;
                putchar((char)j);
            }
        }
        longest_copy--;
        putchar('\n');
    }

    return 0;
}