/*Write a program to find and display the sum of the first n natural numbers.*/

#include <stdio.h>
int main() 
{
	printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum=%d\n", sum);
    return 0;
}
