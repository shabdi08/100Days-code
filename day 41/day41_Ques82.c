//Q82 (Strings)
//Print each character of a string on a new line.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        printf("%c", str[i]);
        printf("\n");
    }
    return 0;
}