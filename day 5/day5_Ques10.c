/*Write a program to calculate simple and compound interest for given principal, rate, and time.*/

#include <stdio.h>
#include <math.h>
int main() 
{
	printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    double principal, rate, time;
    double simple_interest, compound_interest;
    printf("Enter the principal: ");
    scanf("%lf", &principal);
    printf("Enter the rate of interest: ");
    scanf("%lf", &rate);
    printf("Enter the time in years: ");
    scanf("%lf", &time);
    simple_interest = (principal * rate * time) / 100.0;
    double amount = principal * pow((1 + rate / 100.0), time);
    compound_interest = amount - principal;
    printf("Simple Interest=%g, Compound Interest=%g\n", simple_interest, compound_interest);
    return 0;
}
