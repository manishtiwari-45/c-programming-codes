#include <stdio.h>

int main(void) {
    char str[40];

    puts("Enter the string:");
    scanf("%[^\n]", str);   // correct input

    int size = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        size++;
    }

    printf("The size is: %d\n", size);

    int i = 0, j = size - 1;
    while(i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    puts("Reversed string:");
    puts(str);

    return 0;
}