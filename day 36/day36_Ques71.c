//Read and print a 2D matrix.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int matrix[r][c];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i = 0; i < i; i++) 
    {
        for (int j = 0; j < j; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
