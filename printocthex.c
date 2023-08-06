#include <stdio.h>


int main() 
{

    int start,end;
    int step;

    start = 0;
    end  = 16;
    step = 1;

    printf("dec oct hex\n");
    while (start <= end)
    {
        printf("%3d %3o %3x\n",start, start, start);
        start = start + step;
    }
    

}