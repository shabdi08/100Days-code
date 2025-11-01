//Q87 (Strings)
//Count spaces, digits, and special characters in a string.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str[200];
    int i = 0, spaces = 0, dig = 0, alpha=0, spe = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while (str[i] != '\0') 
    {
        if (str[i] == ' ') 
        {
            spaces++;     
        } 
        else if (str[i] >= '0' && str[i] <= '9') 
        {
            dig++;    
        } 
        else if ((str[i] >= 'A' && str[i] <= 'Z') || 
                 (str[i] >= 'a' && str[i] <= 'z')) 
        {
            alpha ++;
        } 
        else 
        {
            spe++;   
        }
        i++;
    }
    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", dig);
    printf("Number of special characters: %d\n", spe);
    return 0;
}
