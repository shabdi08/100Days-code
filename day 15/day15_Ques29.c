//Write a program to calculate the factorial of a number.

#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n,fact=1;
    printf("enter the number whose factorial has to be found : ");
    scanf("%d",&n);
    for (int i=1 ; i<=n ; i++)
    {
        fact = fact*i;
    }
    printf("The factorial of %d is : %d",n,fact);
    return 0;
}