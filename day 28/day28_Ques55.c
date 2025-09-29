//Q55: Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main() 
{
	printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
	printf("--------------------------------------------------\n");
    int n, i, j, isPrime;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are:\n", n);
    for (i = 2; i <= n; i++) 
    {
        isPrime = 1; 
        for (j = 2; j <= i / 2; j++) 
        {
            if (i % j == 0) 
            {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime == 1) 
        {
            printf("%d ", i);
        }
   }
   return 0;
}

