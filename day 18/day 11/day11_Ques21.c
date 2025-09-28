/*Write a program to display the month name and number of days using switch-case for a given month number.*/
#include <stdio.h>
int main()
{
    int m;
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    printf("Enter month number : ");
    scanf("%d", &m);
    switch (m)
    {
        case 1:
            printf("January has 31 days.\n");
            break;
        case 2:
            printf("February has 28 days but 29 in leap years.\n");
            break;
        case 3:
            printf("March has 31 days.\n");
            break;
        case 4:
            printf("April has 30 days.\n");
            break;
        case 5:
            printf("May has 31 days.\n");
            break;
        case 6:
            printf("June has 30 days.\n");
            break;
        case 7:
            printf("July has 31 days.\n");
            break;
        case 8:
            printf("August has 31 days.\n");
            break;
        case 9:
            printf("September has 30 days.\n");
            break;
        case 10:
            printf("October has 31 days.\n");
            break;
        case 11:
            printf("November has 30 days.\n");
            break;
        case 12:
            printf("December has 31 days.\n");
            break;
        default:
            printf("Invalid month number.\n");
    }
    return 0;
}
