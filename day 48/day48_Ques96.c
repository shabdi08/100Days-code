//Q96 (Strings)
//Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main() 
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str[200];
    int i = 0, start = 0, end = 0, temp;
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);  
    while (str[i] != '\0') 
    {
        if (str[i] == ' ' || str[i + 1] == '\0') 
        {
            if (str[i + 1] == '\0')
                end = i;
            else
                end = i - 1;
            int left = start, right = end;
            while (left < right) 
            {
                temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }
            start = i + 1;
        }
        i++;
    }
    printf("Sentence after reversing each word:\n%s\n", str);
    return 0;
}
