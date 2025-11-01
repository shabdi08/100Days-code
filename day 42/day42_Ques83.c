//Q83 (Strings)
//Count vowels and consonants in a string.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str[100];
    int vow = 0, cons = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
        {
            vow++;
        } 
        else 
        {
            cons++;
        }
    }
    printf("Vowels: %d\n", vow);
    printf("Consonants: %d\n", cons);
    return 0;
}
