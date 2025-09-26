/* Write a program to swap two numbers using a third variable. */

#include <stdio.h>
int main() 
{
	printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int a, b, temp;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap: %d %d\n", a, b);
    return 0;
}
