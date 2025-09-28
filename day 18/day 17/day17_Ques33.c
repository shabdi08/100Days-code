//Write a program to check if a number is an Armstrong number.An Armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits.
#include <stdio.h>
#include <math.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n,c=0,d,sum=0,num,dup;
    printf("Enter the number to be checked : ");
    scanf("%d",&n);
    num=n;
    dup=n;
    while(n!=0)
    {
        d=n%10;
        c++;
        n=n/10;
    }
    while(num!=0)
    {
        d=num%10;
        sum = sum+ (pow(d,c));
        num=num/10;
    }
    if(sum==dup)
    {
        printf("%d is armstrong ",dup);
    }
    else
  {
        printf("%d is not armstrong ",dup);
  }
  return 0;
}
