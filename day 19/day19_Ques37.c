//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int num1, num2, max, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    while (max <= num1 * num2) 
    {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break; 
        }
        max++;
    }
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}