//Q86 (Strings)
//Check if a string is a palindrome.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str[100], rev[100];
    int i = 0, l = 0, flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[l] != '\0') 
    {
        l++;
    }
    for (i = 0; i < l; i++) 
    {
        rev[i] = str[l - i - 1];
    }
    rev[l] = '\0';
    for (i = 0; i < l; i++) 
    {
        if (str[i] != rev[i]) 
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("Palindrome\n");
    else
        printf("Not palindrome.\n");

    return 0;
}
