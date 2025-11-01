//Q85 (Strings)
//Reverse a string.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str[100];
    int i = 0, l = 0;
    char temp;
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[l] != '\0') 
    {
        l++;
    }
    for (i = 0; i < (l/2); i++) 
    {
        temp = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}
