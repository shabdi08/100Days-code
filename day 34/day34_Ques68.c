//Delete an element from an array.
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers : ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int num;
    printf("Enter the number to be deleted  : ");
    scanf("%d", &num);
    int flag=0,a[n-1],p=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            flag=1;
        }
        else
        {
            a[p++]=arr[i];
        }
    }
    if(flag==0)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Array after deletion : ");
        for(int i=0;i<p;i++)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}