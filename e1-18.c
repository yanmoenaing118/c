#include <stdio.h>

#define MAX_LINE 1000

int get_line(char line[], int limit);
void copy(char from[], char to[]);

int main()
{

    int len = 0;
    char line[MAX_LINE];

    while((len = get_line(line, MAX_LINE)) > 0 ) {
        printf("%s %d\n", line, len);
    }
    
    return 0;
}


int get_line(char line[], int limit) {
    int i = 0;
    int j = 0;
    int c;
    for(i = 0 ; i < limit - 1 && (c = getchar()) != '\n' && c != EOF; i++ ) {
        line[i] = c;
    }

    j = i;

    while (line[j - 1] == '\t' || line[j - 1] == ' ')
    {
        j--;
    }

    if(line[i - 1] != '\t' && line[i - 1] != ' ') {
        if(c == '\n') {
            line[i] = c;
            i++;
        }
        line[i] = '\0';
    } else {
        i = j;

        line[++i] = '\n';
        line[++i] = '\0';
    }
    
    return i;
    
}


void copy(char from[], char to[]){

}