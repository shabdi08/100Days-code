//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statement.
#include<stdio.h>
int main()
{
	printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    printf ("Enter a year " );
    int year;
    scanf("%d", &year);
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }
return 0;
}
