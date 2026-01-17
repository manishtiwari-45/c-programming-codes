#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    gets(str); // Old method -->  raise error
    printf("%s\n", str);
    return 0;
}
// This code is just to know that gets is now not used in C