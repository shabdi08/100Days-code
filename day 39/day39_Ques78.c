//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum =  sum + mat[i][j];
            }
            else
            {
                continue;
            }
        }
    }
    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}
