#include<stdio.h>

int main()
{
    unsigned int x = 13;
    for(int i = 7; i >= 0; i--){
        if ((x >> i) & 1) {
            printf("%d", 1);
        }
        else{
            printf("%d", 0);
        }
    }
    printf("\n");
}
