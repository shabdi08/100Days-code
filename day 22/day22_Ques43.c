/*Write a program to check if a number is a strong number.
A Strong Number is a special number where the sum of the factorials of its digits equals the original number. 
For example, 145 is a Strong Number because:
1! + 4! + 5! = 1 + 24 + 120 = 145.*/
#include <stdio.h>
int factorial(int n) 
{
    int fact = 1;
    for(int i = 1; i <= n; i++) 
    {
        fact = fact * i;
    }
    return fact;
}
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int num, temp, d, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) 
    {
        d = temp % 10;            
        sum = sum + factorial(d);    
        temp = temp / 10;                   
    }
    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);
    return 0;
}
