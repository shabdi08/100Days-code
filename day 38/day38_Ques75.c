//Add two  matrices
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int r,c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat1[r][c] , mat2[r][c] , sum[r][c];
    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for(int i=r;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            printf("Sum of both matrices is %d ",sum[i][j]);
        }
    }
    return 0;
}