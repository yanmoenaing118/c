#include <stdio.h>

int main()
{

    /**
     * Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.
     * 1. tab -> \t
     * 2. backspace -> \b
     * 3. backslash -> \\
     */

    int ch;

    while ((ch = getchar()) != EOF)
    {
        switch (ch)
        {
        case '\t':
            putchar('\\');
            putchar('t');
            break;
        case '\b':
            putchar('\\');
            putchar('b');
            break;
        case '\\':
            putchar('\\');
            putchar('\\');
            break;
        default:
            putchar(ch);
            break;
        }
    }
    

    return 0;
}