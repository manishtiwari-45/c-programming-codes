#include<stdio.h>
int main(){
    char str[] = "Manish Tiwari";
    printf("%s\n", str);
    printf("%c\n",str[0]);
    printf("%d\n",str[0]);
    printf("%d\n",str[1]);

    str[1] = 'A';
    printf("%s\n", str);
    printf("%c\n",str[1]);
    printf("%d\n",str[1]);

    str[8]='\0';
    printf("%s\n",str);
    printf("%c\n",str[2]);
    printf("%d\n",str[2]);


    str[2]=33;
    printf("%s\n",str);
    printf("%c\n",str[2]);
    printf("%d\n",str[2]);
    
    return 0;
}