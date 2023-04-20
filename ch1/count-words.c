#include <stdio.h>

int main()
{

    char is_found_a_word = 0;

    long words_count = 0;
    int ch;

    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ' || ch == '\n')
        {
            is_found_a_word = 0;
        }
        else
        {
            if (is_found_a_word != 1)
            {
                is_found_a_word = 1;
                words_count++;
            }
        }
    }

    printf("Total words: %ld\n", words_count);

    return 0;
}