#include<stdio.h>

#define IN 1
#define OUT 0
#define MAX 5

int main()
{   
    int c;
    int state = OUT;
    int arr[MAX+1] = {0};
    int count = 0;

    while((c = getchar()) != EOF){

        if(c == ' ' || c == '\t' || c == '\n'){

            if(state == IN){

                if(count > MAX)
                    count = MAX;

                arr[count]++;

                state = OUT;
                count = 0;
            }

        } 
        else{
            state = IN;
            count++;
        }
    }

    /* Handle last word if file doesn't end with space */
    if(state == IN){
        if(count > MAX)
            count = MAX;
        arr[count]++;
    }

    for(int i = 1; i <= MAX; i++){
        printf("%d:", i);
        int curr = arr[i];
        for(int j = 0; j < curr; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
