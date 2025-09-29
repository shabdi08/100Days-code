//Write a program to check if a number is a perfect number.
//A perfect number is a positive integer that equals the sum of its proper divisors (excluding itself).
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("%d is a perfect number.\n", n);
    }
    else
    {
        printf("%d is not a perfect number.\n", n);
    }
    return 0;
}