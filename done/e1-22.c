#include <stdio.h>

#define MAX_INPUT_COLUMNS 50


int main(int argc, char const *argv[])
{
    int char_count = 0;

    char ch;

    while ((ch = getchar()) != EOF)
    {
        if( char_count < MAX_INPUT_COLUMNS ) {
            putchar(ch);
            ++char_count;
        } else {
            if(ch != ' ' && ch != '\t') {
                putchar(ch);
            } else {
                putchar('\n');
                char_count = 0;
            }
        }
    }
    

    return 0;
}
