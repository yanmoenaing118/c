#include<stdio.h>

#define TAB_SPACES 4
#define MAX_LINE 1000

int getstring(char line[]);
void detab(char line[]);

int main()
{
    char line[MAX_LINE];

    printf("GET string\n");
    

    while (getstring(line))
    {
        printf("%s", line);
    }
    

   
    return 0;
}

int getstring(char line[])
{
    char ch;
    int i = 0;
    while (i < MAX_LINE - 1 && ( ch = getchar()) != EOF && ch != '\n' ) line[i++] = ch;

    if(ch == '\n') 
    {
        line[i] = ch;
        i++;
        printf("here is new line\n");
    }
    line[i] = '\0';
    return i;
}


void detab(char line[]) 
{

}


