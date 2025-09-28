/* Write a program to implement a basic calculator using switch-case for +, -, *, /, %. */
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int num1, num2, res;
    char op;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch(op) 
    {
        case '+':
            res = num1 + num2;
            printf("Result: %d\n", res);
            break;
        case '-':
            res = num1 - num2;
            printf("Result: %d\n", res);
            break;
        case '*':
            res = num1 * num2;
            printf("Result: %d\n", res);
            break;
        case '/':
            if (num2 != 0) 
            {
                res = num1 / num2;
                printf("Result: %d\n", res);
            } 
            else 
            {
                printf("Error.\n");
            }
            break;
        case '%':
            if (num2 != 0) 
            {
                res = num1 % num2;
                printf("Result: %d\n", res);
            } 
            else 
            {
                printf("Error.\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}