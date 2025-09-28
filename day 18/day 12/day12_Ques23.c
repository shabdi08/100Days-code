/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
#include <stdio.h>
int main ()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int d,f;
    printf("enter the no. of late days : ");
    scanf("%d",&d);
    if(d<=5)
    {
        f=d*2;
        printf("fine = %d",f);
    }
    else if(d>5 && d<=10)
    {
        f=(5*2)+(d-5)*4;
        printf("fine = %d",f);
    }
    else if(d>10 && d<=30)
    {
        f=(5*2)+(5*4)+(d-10)*6;
        printf("fine = %d",f);
    }
    else if(d>30)
    {
        printf("membership Cancelled");
    }
    return 0;
}
