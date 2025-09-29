//Rotate an array to the right by k positions.
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
    int k;
    printf("Enter number of rotations: ");
    scanf("%d", &k);
    k = k % n;
    int rotated[n];
    for (int i = 0; i < n; i++) 
    {
        rotated[(i + k) % n] = arr[i];
    }
    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", rotated[i]);
    }
    return 0;
}
