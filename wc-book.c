#include <stdio.h>

#define IN 1
#define OUT -1

int main()
{
    int ch;
    int STATE = OUT;
    unsigned long wc;
    wc = 0;

    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            STATE = OUT;
        }
        else if (STATE == OUT)
        {
            STATE = IN;
            wc++;
        }
    }

    printf("World counts: %lu\n", wc);

    return 0;
}