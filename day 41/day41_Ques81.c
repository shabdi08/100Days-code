//Q81 (Strings)
//Count characters in a string without using built-in length functions.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str[100];
    int c = 0, i = 0;
    printf("Enter a string: ");
    scanf("%s", str);  
    while (str[i] != '\0') 
    {
        c++;
        i++;
    }
    printf("Number of characters: %d\n", c);
    return 0;
}
