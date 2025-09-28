//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n,d, pro=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    while (n!=0)
    {
        d=n%10;
        if(d%2 !=0)
        {
            pro=pro*d;
        }
        n=n/10;
    }
    printf("Product of odd digits is: %d\n", pro);
    return 0;
}