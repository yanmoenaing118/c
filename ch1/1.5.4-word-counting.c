#include <stdio.h>

int main()
{
    int c;
    char inside_word = 0;
    long wc = 0;

    printf("Word count program\n");
    while( (c = getchar()) != EOF ) {

        if( c == ' ' || c == '\t' || c == '\n' ) {
            inside_word = 0;
        } else if ( inside_word == 0 ) {
            wc++;
            inside_word = 1;
        }


    }

    printf("Total words: %ld\n", wc);
    
    return 0;
}