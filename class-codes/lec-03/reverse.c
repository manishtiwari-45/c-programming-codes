#include<stdio.h>

void reverse(char str[]);

int main()
{
    char str[100];
    printf("Enter a line: ");
    fgets(str, sizeof(str), stdin);
    
    reverse(str);
    printf("Reversed line: %s\n", str);
    
    return 0;
}

void reverse(char str[]){
    int i, j;
    char ch;
    for(j = 0; str[j] != '\0'; j++){
        ;
    }
    j--;
    
    for(i = 0; i < j; i++, j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}