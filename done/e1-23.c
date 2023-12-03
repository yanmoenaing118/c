#include <stdio.h>

void remove_comments() {
    int c, next;

    while ((c = getchar()) != EOF) {
        if (c == '/') {
            next = getchar();

            if (next == '*') {
                // Multi-line comment found, skip until the end of the comment
                while ((c = getchar()) != '*' || (next = getchar()) != '/')
                    if (next == EOF) break;
            } else if (next == '/') {
                // Single-line comment found, skip until the end of the line
                while ((c = getchar()) != '\n')
                    if (c == EOF) break;

                putchar('\n');  // Add a newline after single-line comment removal
            } else {
                putchar(c);
                // ungetc(next, stdin);
            }
        } else {
            putchar(c);
        }
    }
}

int main() {
    printf("Enter C code (Ctrl+D to stop):\n");
    remove_comments();

    printf("Comments removed successfully.\n");

    return 0;
}
