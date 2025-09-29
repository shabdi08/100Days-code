//Reverse an array without taking extra space.
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n,temp;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<(n/2);i++)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    printf("Reversed Array : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}