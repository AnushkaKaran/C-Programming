#include<stdio.h>
void main()
{
    int a,b,result;
    int *ptr1,*ptr2,*ptrresult;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    ptrresult=&result;
    *ptrresult=*ptr1+*ptr2;
    printf("%d %d %d",a,b,result);
}