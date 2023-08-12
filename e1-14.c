#include <stdio.h>

#define TOTAL_ASCII_CHARS 256

int main()
{

    int ch;
    int nchars[TOTAL_ASCII_CHARS];

    for (int i = 0; i < TOTAL_ASCII_CHARS; i++)
        nchars[i] = 0;

    while ((ch = getchar()) != EOF)
    {

        nchars[ch]++;
    }

    for (int i = 0; i < TOTAL_ASCII_CHARS; i++)
    {
        if ((char)i == '\n')
            continue;
        if (nchars[i] == 0)
            continue;
        printf("%c ", i);
        for (int j = 0; j < nchars[i]; j++)
        {
            putchar('#');
        }
        printf("\n");
    }

    return 0;
}