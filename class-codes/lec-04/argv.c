#include<stdio.h>

int main(int argc, char *argv[])
{
    int i;

    printf("Number of arguments: %d\n", argc);

    for(i = 0; i < argc; i++){
        printf("argv[%d] = %s, address = %p\n", i, argv[i], argv[i]);
    }

    // char *p = argv[1];

    // printf("character of argv[1] = ");
    // while(*p != '\0'){
    //     printf("%c", *p);
    //     p++;
    // }

    char *str = argv[1];
    int j = 0;

    while(str[j] != '\0'){
        printf("%c\n", str[j]);
        j++;
    }

    printf("\n");

    return 0;
}