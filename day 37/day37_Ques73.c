//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int r,c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int matrix[r][c] , sum[r];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < r; i++) 
    {
        sum[i] = 0;
        for (int j = 0; j < c; j++) 
        {
            sum[i] = sum[i] + matrix[i][j];
        }
    }
    printf("\nSum of each row:");
    for (int i = 0; i < r; i++) 
    {
        printf("%d", sum[i]);
    }
    return 0;
}
