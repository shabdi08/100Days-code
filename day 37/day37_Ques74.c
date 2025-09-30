//Find the transpose of a matrix.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int r,c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c] , trans[c][r];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i=r;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            trans[j][i] = mat[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < c; i++) 
    {
        for (int j = 0; j < r; j++) 
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
