#include <stdio.h>

#define MAX_LINE 1000


int getstring(char line[]);
void copy(char from[], char to[]);

int main() {
    int max, len;
    max = 0;
    len = 0;
    char line[MAX_LINE];
    char longest[MAX_LINE];

    while((len = getstring(line)) > 0) {
        if(len > max) {
            max = len;
            copy(line, longest);
            // printf("HELLO %d\n", len);
        }
        // printf("%s", line);
        // printf("%d %d\n", len, max);
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