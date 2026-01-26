// remove multiple blanks, replace them with a single blank

#include<stdio.h>

int main()
{
    int c, prev;
    prev = 0;
    while((c = getchar()) != EOF){
        if(c == ' ' && prev == ' '){
            
        } else{
            putchar(c);
        }
        prev = c;
    }
}

