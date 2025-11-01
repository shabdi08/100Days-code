//Q89 (Strings)
//Count frequency of a given character in a string.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str[200], ch;
    int i = 0, count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);  
    printf("Enter a character to count: ");
    scanf(" %c", &ch);    
    while (str[i] != '\0') 
    {
        if (str[i] == ch) 
        {
            count++;
        }
        i++;
    }
    printf("The character '%c' appears %d times in the string.\n", ch, count);
    return 0;
}
