#include <stdio.h>
void main()
{
    int matrix[3][3];
    int i, j, positivecount = 0, negativecount = 0, zerocount = 0;
    printf("Enter the elements of 3x3 matrix :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Elements [%d][%d]:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matrix[i][j] > 0)
            {
                positivecount++;
            }
            else if (matrix[i][j] < 0)
            {
                negativecount++;
            }
            else
            {
                zerocount++;
            }
        }
    }
    printf("Number of positive elements : %d\n", positivecount);
    printf("Number of negative elements : %d\n", negativecount);
    printf("Number of zero elements : %d", zerocount);
}