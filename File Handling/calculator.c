#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);   // space before %c is IMPORTANT

    printf("Enter the second number: ");
    scanf("%d", &b);

    switch (op)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Error: Division by zero is not allowed");
            else
                printf("Result = %d", a / b);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
