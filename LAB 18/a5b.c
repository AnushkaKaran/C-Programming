#include<stdio.h>
int swap(int *a,int *b);
void main()
{
    int a,b;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("After swapByReference: num1 = %d, num2 = %d\n", a, b);
}
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}