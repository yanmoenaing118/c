#include <stdio.h>

#define MAX_LINE 1000

int get_line(char line[], int limit);
void copy(char from[], char to[]);

int main()
{

    int len = 0;
    char line[MAX_LINE];

    while((len = get_line(line, MAX_LINE)) > 0 ) {
        printf("%s", line);
    }
    
    return 0;
}


int get_line(char line[], int limit) {

}


void copy(char from[], char to[]){

}