/*Write a program to print the following pattern:
*****
*****
*****
*****
*****   */
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
