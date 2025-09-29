//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n,fd,ld,c=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int num=n;
    fd=n;
    ld=num%10;
    while(fd>=10)
    {
        fd=fd/10;
    }
    while(num!=0)
    {
        c++;
        num=num/10;
    }
    int mid = num % (int)pow(10,(c-1)); 
    mid = mid / 10;
    int swap = ld * (int)(pow(10, (c-1))) + (mid * 10 + fd);
    printf("Number after swapping first and last digit: %d\n", swap);
    return 0;
}