//Q84 (Strings)
//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str[100];
    int i = 0;
    printf("Enter a lowercase string: ");
    scanf("%s", str); 
    while (str[i] != '\0') 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("Uppercase string: %s\n", str);
    return 0;
}
