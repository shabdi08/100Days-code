/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345*/

#include <stdio.h>
int main() 
{
	printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int i, j, n = 5;
    for (i = 5; i >= 1; i--) 
    {
        for (j = 1; j < i; j++) 
        {
            printf(" ");
        }
        for (j = i; j <= n; j++) 
        {
            printf("%d", j);
        }
        printf("\n");  
    }
    return 0;
}

