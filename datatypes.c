#include <stdio.h>

int main()
{

    char a_char;
    int a_int;
    short a_short;
    long a_long;

    float a_float;
    double a_double;

    printf("-----on MacOS-----\n");

    printf("sizeof(char) : %lu byte\n", sizeof(a_char));
    printf("sizeof(int) : %lu byte\n", sizeof(a_int));
    printf("sizeof(a_short) : %lu byte\n", sizeof(a_short));
    printf("sizeof(long) : %lu byte\n", sizeof(a_long));

    printf("sizeof(float) : %lu byte\n", sizeof(a_float));
    printf("sizeof(double) : %lu byte\n", sizeof(a_double));
    return 0;
}