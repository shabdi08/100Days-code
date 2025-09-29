//Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n,zero=0,pos=0,neg=0;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
    }
    printf("number of  positive elements is %d\n",pos);
    printf("number of  negative elements is %d\n",neg);
    printf("number of  zero elements is %d\n",zero);
    return 0;
}