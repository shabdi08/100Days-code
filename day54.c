/*Q104 (Logic Enhancers)
Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.*/
#include <stdio.h>
int main() 
{
	printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int totalSum = n * (n + 1) / 2; 
    int leftSum = 0;
    int pivot = -1;
    for(int x = 1; x <= n; x++) 
    {
        leftSum += x; 
        int rightSum = totalSum - leftSum + x; 
        if(leftSum == rightSum) 
        {
            pivot = x;
            break;
        }
    }
    printf("%d\n", pivot);
    return 0;
}

