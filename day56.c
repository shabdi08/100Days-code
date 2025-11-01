/*Q106 (Logic Enhancers)
Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.*/
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    int n, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n], next;
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Next greater elements: ");
    for (i = 0; i < n; i++) 
    {
        next = -1;
        for (j = i + 1; j < n; j++) 
        {
            if (arr[j] > arr[i]) 
            {
                next = arr[j];
                break;
            }
        }
        printf("%d", next);
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");
    return 0;
}
