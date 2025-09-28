/*Write a program to find profit or loss percentage given cost price and selling price.*/
#include <stdio.h>
int main()
{
    double cp,sp,p,l;
    printf("Name - Shabdi Shrivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    printf("Enter cost price and selling price : ");
    scanf("%lf %lf",&cp,&sp);
    p=sp-cp;
    if(p>0)
    {
        double pp=(p/cp)*100;
        printf("Profit = %.2lf\n",p);
        printf("Profit Percentage = %.2lf%%\n",pp);
    }
    else if(p<0)
    {
        double lp=(-p/cp)*100;
        printf("Loss = %.2lf\n",-p);
        printf("Loss Percentage = %.2lf%%\n",lp);
    }
    else
    {
        printf("No Profit No Loss\n");
    }
    return 0;
}