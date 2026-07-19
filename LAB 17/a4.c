#include<stdio.h>
void swap(int *a, int *b);
void main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Before swaping: %d %d\n",a,b);
    swap(&a,&b);
    printf("After swaping: %d %d",a,b);
}
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
} 