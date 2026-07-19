#include<stdio.h>
void main()
{
    int rows , cols;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("enter the number of columns : ");
    scanf("%d",&cols);
    int matrix[rows][cols], transpose[rows][cols];
    printf("enter the elements of matrix :\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Elements [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The transpose of matrix is:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Elements [%d][%d]: ",i,j);
           
        }
    }


    
}