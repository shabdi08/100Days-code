//Q11: Write a program to input an integer and check whether it is even or odd using if�else.

#include <stdio.h>

int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n;
    printf("Enter a number: ");  
    scanf("%d", &n);
    if (n % 2 == 0) 
    {
        printf("Even\n");
    } 
    else 
    {
        printf("Odd\n");
    }
    
     return 0;
}

