#include <stdio.h>

#define TABSTOP 4  // Number of spaces per tab

int main() {
    int c;
    int column = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            // Calculate the number of spaces needed to reach the next tab stop
            int spaces = TABSTOP - (column % TABSTOP);

            // Print the required number of spaces
            for (int i = 0; i < spaces; ++i) {
                putchar(' ');
                ++column;
            }
        } else {
            putchar(c);
            if (c == '\n') {
                column = 0;  // Reset column count at newline
            } else {
                ++column;
            }
        }
    }

    return 0;
}