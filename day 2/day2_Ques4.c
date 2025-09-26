/*Write a program to calculate the area and circumference of a circle given its radius.*/

#include <stdio.h>
int main()
{
	printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    float r;
    float Area;
    float Circumference;
    printf("enter the value of Radius : ");
    scanf("%f",&r);
    Area=3.14*r*r;
    printf("Area of Circle = %.2f\n",Area);
    Circumference=2*3.14*r;
    printf("Circumference of Circle = %.2f\n",Circumference);
    return 0;
}
