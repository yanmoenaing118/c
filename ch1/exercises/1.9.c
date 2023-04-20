#include <stdio.h>

int main() {


    int ch;
    int is_found_blank = 0;


    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ')
        {
            if (is_found_blank == 0)
            {
                putchar(ch);
                is_found_blank = 1;
            }
        } else {
            putchar(ch);
            is_found_blank = 0;
        }
        
    }
    





    return 0;

}