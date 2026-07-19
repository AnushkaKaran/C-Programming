#include <stdio.h>

void main() {
    int rows, cols;

    // Prompt the user to enter the number of rows and columns (assuming it's a square matrix)
    printf("Enter the number of rows and columns (square matrix): ");
    scanf("%d", &rows);
    cols = rows; // Ensuring it's a square matrix

    int matrix[rows][cols];

    // Read values for the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the upper triangular matrix
    printf("The upper triangular matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i <= j) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("0 "); // Use 0 to fill the lower triangular part
            }
        }
        printf("\n");
    }
}
