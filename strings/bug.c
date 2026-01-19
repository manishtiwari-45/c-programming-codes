#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    scanf("%s", str);
    printf("You entered: %s\n", str);
    printf("\n");
    fgets(str, 20, stdin);
    printf("You entered using fgets: %s\n", str);
    scanf("%[^\n]s", str);
    // scanf( "%[^\n]", str);
    printf("You entered using scanset: %s\n", str);
}