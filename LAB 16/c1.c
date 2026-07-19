#include <stdio.h>
void main()
{
    int rows, cols, count = 0;
    int i = 0, j = 0;

    printf("Enter the number of rows and columns:");
    scanf("%d %d ", &rows, &cols);
    int matrix[rows][cols];

    printf("Enter the elements :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Elements:[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int totalelements = rows * cols;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (count > (totalelements / 2))
    {
        printf("The matrix is a sparse matrix\n");
    }
    else
    {
        printf("The matrix is not a sparse matrix");
    }
}