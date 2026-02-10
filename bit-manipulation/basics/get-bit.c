#include<stdio.h>

int main()
{
    unsigned int x = 13; // 1101
    int i = 2;
    // if((x >> i) & 1){
    //     printf("%d\n", 1);

    if(x &(1 << i)){
        printf("%d\n", 1);
    } else {
        printf("%d\n", 0);
    }
    return 0;
}
