#include<stdio.h>
#define MAXLINE 1000
int getline(char line[], int maxline);

void reverse(char s[]);

int main()
{
    char line[MAXLINE];
    while(getline(line,MAXLINE) > 0){
        reverse(line);
    }
    return 0;
}

int get_line(char s[], int lim) {
    int c, i;

    for (i = 0;
         i < lim - 1 && (c = getchar()) != EOF && c != '\n';
         ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}
void reerse(char s[]){
    int i,j;
    char temp;

    for(j = 0;s[j] != '\0'; ++j){
        ;
    }
    if(j>0 && s[j-1] == '\n'){
        --j;
    }
    for(i = 0;i<j/2; ++i){
        temp = s[i];
        s[i] = s[j-1-i];
        s[j-1-i] = temp;
    }
}