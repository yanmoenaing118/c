#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{

    char ch = 'A';

    printf("\nUppercase Letter representation in ASCII\n");
    printf("Character\tASCII\n");

    while (ch != 'Z' + 1)
    {
        printf("%9c\t%4d\n", ch, ch);
        if (ch % 5 == 0)
            printf("-------------------------\n");
        ch++;
    }


    printf("\nLowercase Letter representation in ASCII\n");

    ch = 'a';
    while (ch != 'z' + 1)
    {
        printf("%9c\t%4d\n", ch, ch);
        ch++;
    }

    return 0;
}