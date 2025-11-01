//Q92 (Strings)
//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str[200];
    int freq[26] = {0};  
    int i = 0, found = 0;
    printf("Enter a string in lowercase: ");
    scanf("%s", str);
    while (str[i] != '\0') 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            freq[str[i] - 'a']++; 
            if (freq[str[i] - 'a'] == 2) 
            {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break;
            }
        }
        i++;
    }
    if (found==0)
    {
        printf("No repeating lowercase alphabet found.\n");
    }
    return 0;
}
