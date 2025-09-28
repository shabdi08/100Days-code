//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        if(i%2!=0)
        {
            sum = sum+i;
        }
    }
    printf("Sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}