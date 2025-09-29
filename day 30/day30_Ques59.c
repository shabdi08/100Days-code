//Count even and odd numbers in an array.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total even numbers : %d\n",even);
    printf("Total odd numbers : %d\n",odd);
    return 0;
}