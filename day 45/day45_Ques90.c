//Q90 (Strings)
//Toggle case of each character in a string.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str[200];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);  
    while (str[i] != '\0') 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32;  
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] = str[i] + 32; 
        }
        i++;
    }
    printf("Toggled string: %s\n", str);
    return 0;
}
