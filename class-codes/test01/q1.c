#include <stdio.h>

int main() {
    unsigned int num;
    int i;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("8-bit binary representation of %d is: ", num);

    for(i = 7; i>= 0; i--){
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
    
    return 0;
}
