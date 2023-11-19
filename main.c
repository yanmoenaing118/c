#include <stdio.h>
#define MAX_LINE 1000
#define TOTAL_TABS 100
#define TAP_SPACES 7


int getstring(char line[]);
void copy(char from[], char to[]);
void detab(char line[]);

int main() {
    int max, len;
    max = 0;
    len = 0;
    char line[MAX_LINE];
    char longest[MAX_LINE];

    while((len = getstring(line)) > 0) {
       detab(line);
    }

    return 0;

}


int getstring(char line[]) {
    int c,i;
    i = 0;
    while( (c = getchar()) != EOF && i < MAX_LINE- 1 && c != '\n') {
        line[i] = c;
        i++;
    }
    if( c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    printf("i = %d\n", i);
    return i;
}



void copy(char from[], char to[]){ 
    int i  = 0;
    while((to[i] = from[i]) != '\0') ++i;
}


void detab(char line[]){
    int i = 0;
    while((line[i]) != '\0') {
        if(line[i] == '\t') {
            int j = 0;
            while(j < TAP_SPACES) {
                putchar(' ');
                j++;
            }
        } else {
            putchar(line[i]);
        }
        
        i++;
    }
}
