#include<stdio.h>
void main()
{
    int i,j;
    int students[20][2];
    printf("Enter the roll no. and marks of 20 students: \n");
    for(i=0;i<20;i++){
        printf("Student %d\n",i+1);
        printf("Roll number:");
        scanf("%d",&students[i][0]);
        printf("Marks :");
        scanf("%d",&students[i][1]);
    }
    printf("\n Stored roll no. and marks :\n");
    for(i=0;i<20;i++){
        printf("student %d :- Roll no.:%d, Marks: %d\n",i+1,students[i][0],students[i][1]);
    }
}