#include<stdio.h>
#define IN 1
#define OUT 0
#define MAX 10


int main(){
    int c;
    int state = OUT;
    int arr[MAX+1] = {0};
    int count = 0;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            if(state == IN){
                arr[count]++;
                state = OUT;
                count = 0;
            }
        } else{
            state = IN;
            count++;
        }
    }
    putchar('\n');


    for(int i = 1;i <= MAX; i++){
        printf("%d:", i);
        for(int j = 0; j < arr[i]; j++){
            printf("*");
        }
        printf("\n");
    }
}