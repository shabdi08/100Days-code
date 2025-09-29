//Find the second largest element in an array.
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
    int f, s;
    if (arr[0] > arr[1]) 
    {
        f = arr[0];
        s = arr[1];
    } 
    else 
    {
        f = arr[1];
        s = arr[0];
    }
    for (int i = 2; i < n; i++) 
    {
        if (arr[i] > f) 
        {
            s = f;
            f = arr[i];
        } 
        else if (arr[i] > s && arr[i] != f) 
        {
            s = arr[i];
        }
    }
    if (f == s) 
    {
        printf("There is no second largest element.\n");
    } 
    else 
    {
        printf("The second largest element is %d\n", s);
    }
    return 0;
}
