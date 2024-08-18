#include <stdio.h>
#include <math.h>

int main()
{

    int c;
    char found_blank = 0;

    while( ( c = getchar() ) != EOF ) {

        if(c == '\t' || c == ' ') {
            found_blank = 1;
        } else if ( found_blank == 1 && !( c == '\t' || c == ' ')) {
            putchar(' ');
            putchar(c);
            found_blank = 0;
        } else if ( found_blank == 0 && !( c == '\t' && c == ' ' ) )  {
            putchar(c);
            found_blank = 0;
        }

    }




    
    return 0;
}


