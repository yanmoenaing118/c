#include <stdio.h>

#define IN 1
#define OUT -1

#define MAX_WORDS 10

/**
 *
 * my version of word count program
 */

int main()
{
    int ch;

    int STATE = OUT;

    unsigned long wc = 0;
    unsigned long lgw = 0;

    int word_index = 0;
    int word_counts[MAX_WORDS];
    int longest = 0;

    for(int i = 0 ; i < MAX_WORDS; i++)
    {
        word_counts[i] = 0;
    }

    while ((ch = getchar()) != EOF)
    {
        if (ch != '\n' && ch != ' ' && ch != '\t')
        {
            if (STATE == OUT) 
            {
                ++wc;
                word_index = wc;
            }
            STATE = IN;
            ++word_counts[word_index];
            // putchar('#');
        }
        else
        {
            STATE = OUT;
            // putchar('\n');
        }
    }

    for(int i = 0 ; i < MAX_WORDS; i++ ) {
        if( word_counts[i] > longest ) longest = word_counts[i];
    }
    printf("LONGEST WORD is %d characters long.\n", longest);
    printf("TOTAL NO WORDS is %lu \n", wc);

    lgw = longest;

    for (int i = 0; i < lgw; i++)
    {
        for (int j = 0; j < wc; j++)
        {
            if(longest - word_counts[j + 1] <= 0 )
            {
                putchar('#');
            }
            else 
            {
                putchar(' ');
            }
        }
        putchar('\n');
        longest--;
    }

    printf("\n");

    return 0;
}