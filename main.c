#include <stdio.h>

int main()
{
    
    for(int F = 0; F <= 300; F += 20 ) {
        int C =( 5  * ( F - 32) ) / 9;
        printf("%d\t%d\n", F, C );
    }
    
    return 0;
}


