//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() 
{
    printf("Name - Shabdi Srivastava\n SAP ID - 590021135\n Course - BCA\n Batch - 06\n");
    printf("--------------------------------------------------\n");
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Diagonal traversal of the matrix:\n");
    for (int d = 0; d < r + c - 1; d++) {
        // Determine the starting row
        int r_start = (d < c) ? 0 : d - c + 1;
        // Determine the ending row
        int r_end = (d < r) ? d : r - 1;

        for (int i = r_start; i <= r_end; i++) {
            int j = d - i;
            printf("%d ", mat[i][j]);
        }
    }

    printf("\n");
    return 0;
}
