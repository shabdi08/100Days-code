//Q95 (Strings)
//Check if one string is a rotation of another.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str1[100], str2[100], temp[200];
    int i = 0, j = 0, k = 0, len1 = 0, len2 = 0, found = 0;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    while (str1[len1] != '\0')
    {
        len1++;
    }
    while (str2[len2] != '\0')
    {
        len2++;
    }
    if (len1 != len2) 
    {
        printf("Strings are NOT rotations of each other.\n");
        return 0;
    }
    for (i = 0; i < len1; i++)
    {
        temp[i] = str1[i];
    }
    for (j = 0; j < len1; j++)
    {
        temp[i + j] = str1[j];
    }
    temp[2 * len1] = '\0';
    for (i = 0; temp[i] != '\0'; i++) 
    {
        k = 0;
        while (temp[i + k] == str2[k] && str2[k] != '\0')
            k++;
        if (str2[k] == '\0') 
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("Strings ARE rotations of each other.\n");
    else
        printf("Strings are NOT rotations of each other.\n");
    return 0;
}
