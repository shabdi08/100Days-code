//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int num, temp;
    long bin = 0;  
    int place = 1;          
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    if (num == 0) 
    {
        printf("Binary: 0\n");
        return 0;
    }
    while (temp != 0) 
    {
        int rem = temp % 2;           
        bin = bin + rem * place; 
        place = place * 10;           
        temp = temp / 2;              
    }
    printf("Binary: %ld\n", bin);
    return 0;
}
