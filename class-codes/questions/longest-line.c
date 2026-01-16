#include <stdio.h>

#define MAXLINE 1000

void copy(char to[], char from[]);
int get_line(char line[], int limit);

int main()
{   
    int len;
    int longest = 0;

    char longest_line[MAXLINE];
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > longest) {
            longest = len;
            copy(longest_line, line);   
        }
    }

    if (longest > 0) {              
        printf("\n%s", longest_line);
        printf("\nLongest length is: %d\n", longest);
    }

    return 0;                       
}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}

int get_line(char line[], int limit)
{
    int c, i;

    for (i = 0; i < limit - 1 &&
         (c = getchar()) != EOF &&
         c != '\n'; i++) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        i++;
    }

    line[i] = '\0';    

    return i;         
}
