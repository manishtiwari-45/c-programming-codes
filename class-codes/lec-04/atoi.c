#include<stdio.h>
// #include<stdlib.h>

int myatoi(char str[]){
    int num = 0;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] < '0' && str[i] > '9'){
            break;
        }
        num = num*10 + (str[i] - '0');
        i++;
    }
    
    return num;

}

int main(int argc, char *argv[]){

    printf("Number of arguments: %d\n", argc);

    for(int i = 1; i < argc; i++){
        printf("%d\n", myatoi(argv[i]));
        // printf("%d\n", atoi(argv[i]));
    }
    int sum = 0;
    for(int i = 1; i < argc ; i++){
        sum += atoi(argv[i]);
    }
    printf("sum = %d\n", sum);


    return 0;
}


