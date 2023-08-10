#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int STATE;

    int ch;

    STATE = OUT;
    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ' || ch == '\t')
        {
            if (STATE == IN)
            {
                putchar('\n');
            }
            STATE = OUT;
        }
        else if (STATE == OUT)
        {
            STATE = IN;
            putchar(ch);
        }
        else if (STATE == IN)
        {
            putchar(ch);
        }
    }

    return 0;
}