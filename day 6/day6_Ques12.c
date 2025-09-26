//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if�else.
#include <stdio.h>
int main() 
{
	printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n >= 0) 
    {
        if (n == 0) 
        {
            printf("Zero\n");
        } 
        else 
        {
            printf("Positive\n");
        }
    } 
    else 
    {
        printf("Negative\n");
    }

    return 0;
}

