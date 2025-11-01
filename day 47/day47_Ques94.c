//Q94 (Strings)
//Find the longest word in a sentence.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, currLen = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);  
    while (str[i] != '\0') 
    {
        if (str[i] != ' ' && str[i] != '\0') 
        {
            word[j++] = str[i];
            currLen++;
        } 
        else 
        {
            word[j] = '\0'; 
            if (currLen > maxLen) 
            {
                maxLen = currLen;
                int k = 0;
                while (word[k] != '\0') 
                {
                    longest[k] = word[k];
                    k++;
                }
                longest[k] = '\0';
            }
            j = 0;
            currLen = 0;
        }
        i++;
    }
    word[j] = '\0';
    if (currLen > maxLen) 
    {
        int k = 0;
        while (word[k] != '\0') 
        {
            longest[k] = word[k];
            k++;
        }
        longest[k] = '\0';
    }
    printf("The longest word is: %s\n", longest);
    printf("Length: %d\n", maxLen);
    return 0;
}
