//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int mat[n][n], diag[n],flag=0;
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
            if(i==j)
            {
                diag[i]=mat[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (diag[i] == diag[j]) 
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1) 
        {
            break;
        }
    }
    if (flag == 0)
        printf("All elements are distinct.\n");
    else
        printf("Array has duplicate elements.\n");
    return 0;
}
