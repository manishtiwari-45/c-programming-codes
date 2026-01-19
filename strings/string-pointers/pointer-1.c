#include<stdio.h>

int main(){
    char str[] = "Manish is the best";
    printf("Original string: %s\n", str);

    char* ptr = "am the worst"; // Pointer to string literal, read-only declaration
    printf("String using pointer: %s\n", ptr);
    printf("%c\n", ptr[0]); // Accessing first character
    printf("%c\n", *ptr);
    ptr++; // Moving pointer to next character
    printf("%c\n", *ptr);

    printf("%c\n", *ptr);
    printf("%d\n", *ptr);

    // / ptr[0]='g'; //invalid operation (read only)
    // printf("%s\n",ptr);
    // printf("%c\n",ptr[0]);

}