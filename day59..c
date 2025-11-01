/*Q109 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.*/
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
    if(k > n) 
    {
        printf("0\n");
        return 0;
    }
    int maxSum = 0;
    for(int i = 0; i < k; i++) 
    {
        maxSum += arr[i];
    }
    int windowSum = maxSum;
    for(int i = k; i < n; i++) 
    {
        windowSum = windowSum - arr[i - k] + arr[i];
        if(windowSum > maxSum) 
        {
            maxSum = windowSum;
        }
    }
    printf("%d\n", maxSum);
    return 0;
}
