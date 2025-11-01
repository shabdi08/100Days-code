//Q93 (Strings)
//Check if two strings are anagrams of each other.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str1[100], str2[100];
    int freq[26] = {0};  
    int i = 0;
    printf("Enter first string (lowercase only): ");
    scanf("%s", str1);
    printf("Enter second string (lowercase only): ");
    scanf("%s", str2);
    while (str1[i] != '\0') 
    {
        if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            freq[str1[i] - 'a']++;
        }
        i++;
    }
    i = 0;
    while (str2[i] != '\0') 
    {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            freq[str2[i] - 'a']--;
        i++;
    }
    for (i = 0; i < 26; i++) 
    {
        if (freq[i] != 0) 
        {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }
    printf("The strings are ANAGRAMS of each other.\n");
    return 0;
}
