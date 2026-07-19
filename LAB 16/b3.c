#include<stdio.h>
void main()
{
    int rows,cols;
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&rows,&cols);
    int matrix[rows][cols];
    int diagonalsum=0;
    printf("Enter the elements:");
    for( int i=0;i<rows;i++){
        for( int j=0;j<cols;j++){
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The diagonal elements are:\n");
    for(int i=0;i<rows;i++){
        printf("%d ",matrix[i][i]);
        diagonalsum+=matrix[i][i];
    }
    printf("\n");
    printf("The sum of diagonal elements are :\n");
    printf("%d",diagonalsum);
}