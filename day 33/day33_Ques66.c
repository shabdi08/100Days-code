//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n,p=0;
    scanf("%d",&n);
    printf("Enter %d numbers in ascending order  :",n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be inserted : ");
    int num;
    scanf("%d",&num);
    int arr2[n+1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>num)
        {
            arr2[p++]=num;
        }
        else
        {
            arr2[p++]=arr[i];
        }
    }
    if(p==n)
    {
        arr2[p++]=num;
    }
    printf("The new array is :");
    for(int i=0;i<p;i++)
    {
        printf("%d",arr2[i]);
    }
    return 0;
}