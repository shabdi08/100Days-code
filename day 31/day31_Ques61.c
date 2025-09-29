//Search for an element in an array using linear search.
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n,flag=0;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched : ");
    int num;
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            printf("Element found at position %d",(i+1));
            flag=1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Element not found in the array");
    }
    return 0;
}