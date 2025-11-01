//Q100 (Strings)
//Print all sub-strings of a string.
#include <stdio.h>
int main()
{
    printf("Name - Shabdi Srivastava\nSAP ID - 590021135\nCourse - BCA\nBatch - 06\n");
    printf("--------------------------------------------------\n");
    char str[100];
    int i, j, k, len = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[len] != '\0')
    {
        len++;
    }
    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            for (k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }
    return 0;
}
