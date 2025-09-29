//Search in a sorted array using binary search.
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    printf("Enter the size of array : ");
    int n;
    scannf("%d",&n);
    printf("Enter %d numbers in ascending order  :");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched :");
    int num;
    scanf("%d",&num);
    int start=0,end=n-1,mid=((start+end)/2);
    while(start<=end)
    {
        if(arr[mid]==num)
        {
            printf("Number found at position %d",(mid+1));
            break;
        }
        else if(arr[mid]<num)
        {
            start=mid+1;
            mid=(start+end)/2;
        }
        else if(arr[mid]>num)
        {
            end=mid-1;
            mid=(start+end)/2;
        }
    }
    if(start>end)
    {
        printf("Number not found in the array");
    }
    return 0;
}