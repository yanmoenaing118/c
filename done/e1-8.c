#include <stdio.h>

int main()
{
    unsigned long nb, nt, nl;
    nb = nt = nl = 0;

    char c;

    while ((c = getchar()) != EOF)
    {

        switch (c)
        {
        case ' ':
            ++nb;
            break;
        case '\n':
            ++nl;
            break;
        case '\t':
            ++nt;
            break;
        default:
            break;
        }
    }

    printf("Character\tCount\n");
    printf("%9c\t%5lu\n", 'b', nb);
    printf("%9c\t%5lu\n", 'l',nl);
    printf("%9c\t%5lu\n", 't', nt);

    return 0;
}