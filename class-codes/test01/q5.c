#include <stdio.h>

void toBinary(int n)
{
    int bin[8];

    for (int i = 0; i < 8; i++) {      
        bin[i] = n % 2;
        n = n / 2;
    }

    for (int j = 7; j >= 0; j--) {
        printf("%d", bin[j]);
    }
}

void toHex(int n)
{
    char hex[8];
    int i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {                  
        int rem = n % 16;

        if (rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = rem - 10 + 'A';

        n = n / 16;                   
        i++;
    }

    for (int j = i - 1; j >= 0; j--) { 
        printf("%c", hex[j]);
    }
}

void toOct(int n)
{
    int oct[8];
    int i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {
        oct[i] = n % 8;
        n = n / 8;                    
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", oct[j]);
    }
}

int main()
{
    int n;

    printf("Enter an 8-bit number (0–255): ");
    scanf("%d", &n);

    if (n < 0 || n > 255) {
        printf("Invalid input\n");
        return 0;
    }

    printf("Binary: ");
    toBinary(n);

    printf("\nOctal : ");
    toOct(n);

    printf("\nHex   : ");
    toHex(n);

    printf("\n");
    return 0;
}
