//Q99 (Strings)
//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    int d, m, y;
    char result[20];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);
    sprintf(result, "%02d-%s-%04d", d, months[m-1], y);
    printf("Date in new format: %s\n", result);
    return 0;
}
