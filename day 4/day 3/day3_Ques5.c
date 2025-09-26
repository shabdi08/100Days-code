/*Write a program to convert temperature from Celsius to Fahrenheit.*/

#include<stdio.h>
int main()
{
	printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    float celsius, fahrenheit; 
    printf("Enter temperature in Celsius: "); 
    scanf("%f", &celsius); 
    fahrenheit = (celsius * 9 / 5) + 32; 
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit); 
    return 0;
}
