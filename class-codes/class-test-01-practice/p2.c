// no of words

#include<stdio.h>
#define IN 1
#define OUT 0

int main()
{
    int nw = 0;
    int c;
    int state = OUT;

    while ((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t'){
            if(state == IN){
                state = OUT;
            }
        }
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("Total no. of words are: %d\n", nw);
    


}