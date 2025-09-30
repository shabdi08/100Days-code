//Check if a matrix is symmetric.
///A symmetric matrix is a square matrix that is equal to its transpose.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n;
    printf("Enter number of rows and columns: ");
    scanf("%d", &n);
    int mat[n][n] , trans[n][n] , flag=1;
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            trans[j][i] = mat[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j] != trans[i][j])
            {
                flag = 0;
                break;
            }
        }
    }
    if(flag == 1)
    {
        printf("symmetric matrix.");
    }
    else
    {
        printf("not a symmetric matrix.");
    }
    return 0;
}