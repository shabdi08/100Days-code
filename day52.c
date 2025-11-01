//Q102 (Logic Enhancers)
/*Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x 
and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index 
of the first occurrence.*/
#include <stdio.h>
int main() 
{
	printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");
    int n, x;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter x: ");
    scanf("%d", &x);
    int low = 0, high = n - 1, ceilIndex = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] >= x) 
        {
            ceilIndex = mid;   
            high = mid - 1;    
        } else {
            low = mid + 1;
        }
    }
    printf("%d\n", ceilIndex);
    return 0;
}
