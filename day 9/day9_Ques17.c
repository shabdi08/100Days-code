//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
int main()
{
	printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
        printf("Roots are real and different\n");
    else if (d == 0)
        printf("Roots are real and same\n");
    else
        printf("Roots are complex\n");
return 0;
}
