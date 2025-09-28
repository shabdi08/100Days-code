//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    long binary, onesComp = 0;
    int place = 1, digit;
    printf("Enter a binary number: ");
    scanf("%ld", &binary);
    while (binary > 0) 
    {
        digit = binary % 10;
        if (digit == 0)
        {
            onesComp = onesComp + 1 * place;  
        }
        else
        {
           onesComp = onesComp + 0 * place;
        }
        place = place*10;    
        binary = binary/10;
    }
    printf("1's Complement: %ld\n", onesComp);
    return 0;
}
