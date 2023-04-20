#include <stdio.h>

int main() {

    /**
     * Write a program to count blanks, tabs, and newlines
     * 
     * 1. check spacebar charater for blanks
     * 2. check tab character for tabs
     * 3. check '\n' for new line
    */

    long blanks = 0;
    long tabs = 0;
    long lines = 0;
    
    int ch;

    while ((ch = getchar()) != EOF)
    {
        switch (ch)
        {
        case ' ':
            blanks++;
            break;
        case '\t':
            tabs++;
            break;
        case '\n':
            lines++;
            break;
        default:
            break;
        }
    }
    
    printf("Blanks: %ld\nTabs: %ld\nLines: %ld\n", blanks, tabs, lines);

    return 0;
}