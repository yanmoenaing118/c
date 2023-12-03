#include<stdio.h>

#define TABSTOPS 4

int main() {
    int ch;
    int blank_count = 0;
    int columns = 0;

    while ((ch = getchar()) != EOF)
    {
        if( ch == ' ') {
            blank_count++;
            if(blank_count % TABSTOPS == 0)
            {
                putchar('\t');
                blank_count = 0;
            } 

        } else {
            for(int i = 0 ; i < blank_count; i++ ) {
                putchar(' ');
            }
            putchar(ch);
            blank_count = 0;
        }

        columns++;

        if(ch == '\n') 
        {
            columns = 0;
            blank_count = 0;
        }
    }
    

    return 0;
}