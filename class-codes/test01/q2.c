#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    int onesC = -1 - b;    
    int twosC = onesC + 1;
    
    int result = a + twosC;
    printf("%d - %d = %d\n", a, b, result);
    
    return 0;
}