//Q88 (Strings)
//Replace spaces with hyphens in a string.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);   
    while (str[i] != '\0') 
    {
        if (str[i] == ' ') 
        {
            str[i] = '-';
        }
        i++;
    }
    printf("Modified string: %s\n", str);
    return 0;
}
