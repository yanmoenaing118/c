#include <stdio.h>

int main()
{

    int c,i;
    char is_whitespace = 0;
    int wlenght[10];
    int index = 0;
    int longest_word_length = 0;

    for(i = 0 ; i < 10; i++ ) wlenght[i] =0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            is_whitespace = 1;
        }
        else if( is_whitespace )
        {
            index += 1; 
            wlenght[index]++;
            is_whitespace = 0;
        } 
        else 
        {
            wlenght[index]++;
        }

    }

    for(i = 0 ; i < 10; i++ ) {
        if(wlenght[i] > longest_word_length) {
            longest_word_length = wlenght[i];
        }
    }


    printf("Verical Histogram of word length.\n");

    for(i = 0 ; i < longest_word_length; i++) {
        for(int j = 0 ; j < 10; j++ ){
            int wordLength = wlenght[j];
            if(i >= longest_word_length - wordLength && wordLength > 0) {
                putchar('#');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    printf("\n");

    return 0;
}