#include<stdio.h>

int compli(int a){

    return (a==0)? 1:0;
}

int main()
{
    int A, B;
    printf("--------------------\n");
    printf("| A | B | LHS | RHS|\n");
    printf("--------------------\n");

    for(A = 0; A < 2; A++){
        for(B = 0; B < 2; B++){

            // (A + B)` = A` + B`

            // int l = compli(A | B);
            // int r = compli(A) & compli(B);

            

            int l = compli(A & B);
            int r = compli(A) | compli(B);

            printf("| %d | %d |  %d  |  %d |\n", A, B, l, r);
        }
    }

    return 0;
}
