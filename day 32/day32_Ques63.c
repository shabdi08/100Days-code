//Merge two arrays.
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n,m,temp,p=0;
    printf("Enter the number of elements in the first array : ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter %d numbers : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the number of elements in the second array : ");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter %d numbers : ",m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int s=n+m;
    int arr3[s];
    for(int i=0;i<n;i++)
    {
        arr3[p++]=arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        arr3[p++]=arr2[i];
    }
    printf("Merged Array :");
    for(int i=0;i<s;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}

