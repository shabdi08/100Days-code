//Write a program to print all factors of a given number.
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factors of %d are : ",n);
    for (int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d \n",i);
        }
    }
    return 0;
}