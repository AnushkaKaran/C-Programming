#include <stdio.h>
void main()
{
    int i, j, rows, cols;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    printf("Enter the number of columns:");
    scanf("%d", &cols);
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
    printf("Enter the elements of matrix 1 :");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Elements [%d][%d]:", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of matrix 2 :");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Elements [%d][%d]:", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("The resulting matrix after addition is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf(" %d ", result[i][j]);
        }
        printf("\n");
    }
}
