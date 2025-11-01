//Multiply two matrices.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int r1,c1,r2,c2;
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) 
    {
        printf("Multiplication not possible\n");
        return 1;
    }
    int mat1[r1][c1] , mat2[r2][c2] , prod[r1][c2];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            prod[i][j] = 0;
            for (int k = 0; k < c1; k++) 
            {
                prod[i][j] = prod[i][j] + mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Product of the matrices:\n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}