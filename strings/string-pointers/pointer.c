#include<stdio.h>

int main(){
    char str[] = "Manish Tiwari";
    char *ptr = str;
    printf("String using pointer: %s\n", str);
    printf("String using array: %s\n", ptr);
    // *ptr="I";//INVALID SYNTAX

    *ptr = 'm'; //VALID SYNTAX
    printf("Modified string using pointer: %s\n", str);
    // *ptr = 'manish';
    return 0;
}