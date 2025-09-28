//Write a program to find the HCF (GCD) of two numbers
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int num1, num2, hcf = 1, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int min = (num1 < num2) ? num1 : num2;
    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) 
        {
            hcf = i;
        }
    }
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}
