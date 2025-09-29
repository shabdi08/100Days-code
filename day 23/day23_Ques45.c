//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n;
    printf("Enter the number of terms :");
    scanf("%d",&n);
    float sum=0.0,num,den;
    for(int i=1 ; i<=n ; i++)
    {
        num=i*2;
        den=(i*4)-1;
        sum=sum+ num/den;
    }
    printf("The sum of series till %d terms is %f : ",n,sum);
    return 0;
}