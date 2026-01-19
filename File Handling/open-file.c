#include<stdio.h>

int main(){
    FILE *file = fopen("file.txt","r");

    if(file == NULL){
        printf("error file opening\n");
        return 1;
    }
    printf("File opened successfully\n");
    fclose(file); //IMPORTANT 

    return 0;
}