/*Q108 (Logic Enhancers)
Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.*/
#include <stdio.h>
int main() 
{
	printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");
    int n, nums[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int answer[100];
    int prefix[100], suffix[100];
    prefix[0] = 1;
     for(int i = 1; i < n; i++) 
     {
        prefix[i] = prefix[i-1] * nums[i-1];
    }
    suffix[n-1] = 1;
    for(int i = n-2; i >= 0; i--) 
    {
        suffix[i] = suffix[i+1] * nums[i+1];
    }
    for(int i = 0; i < n; i++) 
    {
        answer[i] = prefix[i] * suffix[i];
    }
    printf("[");
    for(int i = 0; i < n; i++) 
    {
        printf("%d", answer[i]);
        if(i != n-1) printf(",");
    }
    printf("]\n");
    return 0;
}