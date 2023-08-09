#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\t':
            putchar('\\');
            putchar('t');
            break;
        case '\b':
            putchar('\\');
            putchar('b');
        case '\\':
            putchar('\\');
        default:
            putchar(c);
            break;
        }
    }

    return 0;
}