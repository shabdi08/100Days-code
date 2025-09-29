//Q56: Read and print elements of a one-dimensional array

#include <stdio.h>
int main() 
{
	printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
	printf("--------------------------------------------------\n");
    int n, i; 
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Array elements are:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

