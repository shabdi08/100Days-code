//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int num;         
    int count[10] = {0};   
    int digit, maxDigit, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) 
    {
        digit = num % 10;      
        count[digit]++;        
        num= num/10;             
    }
    maxDigit = 0;
    for (i = 1; i < 10; i++) 
    {
        if (count[i] > count[maxDigit]) 
        {
            maxDigit = i;
        }
    }
    printf("Digit that occurs most times: %d\n", maxDigit);
    return 0;
}