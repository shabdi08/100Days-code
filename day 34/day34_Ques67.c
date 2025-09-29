//Insert an element in an array at a given position.
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
    int num, pos;
    printf("Enter the number to be inserted with its position : ");
    scanf("%d%d", &num, &pos);
    if (pos < 1 || pos > n+1) 
    {
        printf("Invalid position!\n");
        return 0;
    }
    int a[n+1], p = 0;
    for (int i = 0; i < n; i++) 
    {
        if (i+1 == pos) 
        {
            a[p++] = num;
        }
        a[p++] = arr[i];
    }

    if (pos == n+1) 
    {
        a[p++] = num;
    }
    printf("Array after insertion : ");
    for (int i = 0; i < p; i++) 
    {
        printf("%d ", a[i]);
    }
    return 0;
}
