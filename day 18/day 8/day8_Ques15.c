//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
int main()
{
	printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase alphabet\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase alphabet\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special character\n");
    }
return 0;
}
