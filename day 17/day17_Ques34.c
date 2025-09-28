//Write a program to check if a number is prime.

#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n,c=0;
    printf("Enter the number to be checked : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("%d is prime ",n);
    }
    else
    {
        printf("%d is not prime ",n);
    }
    return 0;
}