/*Write a program to swap two numbers without using a third variable.*/

#include <stdio.h>
int main() 
{
	printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap: %d %d\n", a, b);
    return 0;
}
