//palindrome or not
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n,rev=0,num,d;
    printf("Enter the number to be checked : ");
    scanf("%d",&n);
    num =n;
    while(n!=0)
    {
       d=n%10;
       rev = rev*10 + d;
       n=n/10;
    }
    if(num==rev)
        printf("%d is a palindrome.\n",num);
    else
        printf("%d is not a palindrome.\n",num);
    return 0;
}