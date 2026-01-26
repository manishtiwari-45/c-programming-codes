// count number of line and total characters

#include<stdio.h>

int main()
{
    int nc, nl;
    nc = nl = 0;
    int c;
    while((c = getchar()) != EOF){
        if(c == '\n'){
            nl++;
        }

        nc++;
    }
    printf("Total characters %d and total lines are: %d\n", nc, nl);
}


