#include <stdio.h>
#include <string.h>

int main(void) {
    char str[40];
    puts("enter the string");
    scanf("%[^\n]s", str);
    puts("the size is");
    int size=0;
    for(int i=0;str[i]!='\0';i++){
        size++;
    }
    printf("%d\n",size);

    for(int i=0,j=size-1;i<j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("Reversed string:");
    puts(str);
    return 0;

}