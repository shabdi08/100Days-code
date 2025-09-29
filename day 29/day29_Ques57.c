//Q57: Find the sum of array elements.

#include <stdio.h>
int main() 
{
	printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
	printf("--------------------------------------------------\n");
    int n, i, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) 
    {
        sum = sum + arr[i];
    }
    printf("Sum = %d\n", sum);
    return 0;
}

