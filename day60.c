/*Q110 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.*/
#include <stdio.h>
int main() 
{
	printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");
    int n, k, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter size of subarray k: ");
    scanf("%d", &k);
    for(int i = 0; i <= n - k; i++) 
    {
        int max = arr[i];
        for(int j = 1; j < k; j++) 
        {
            if(arr[i + j] > max)
                max = arr[i + j];
        }
        printf("%d", max);
        if(i != n - k) printf(" ");
    }
    printf("\n");
    return 0;
}
