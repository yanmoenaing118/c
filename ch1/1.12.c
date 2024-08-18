#include <stdio.h>

int main()
{
    int c;
    int start_new_line = 0;

    printf("Print one word per line\n");
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n')
        {
            start_new_line = 0;
            putchar(c);
        }
        else if (start_new_line == 0)
        {
            start_new_line = 1;
            if(c != '\n') {
                putchar(c);
            }
            putchar('\n');
        }


    }

    return 0;
}