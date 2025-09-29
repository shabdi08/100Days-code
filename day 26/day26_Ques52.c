/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*     */

#include <stdio.h>
int main() 
{
	printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int i;
    printf("*\n\n");
    for (i = 0; i < 2; i++) 
    {
        printf("*\n");
    }
    printf("\n");
    for (i = 0; i < 5; i++) 
    {
        printf("*\n");
    }
    printf("\n");
    for (i = 0; i < 3; i++) 
    {
        printf("*\n");
    }
    printf("\n");
    printf("*\n");
    return 0;
}
