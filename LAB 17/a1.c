#include<stdio.h>
void main()
{
int a;
printf("Enter the value of a:");
scanf("%d",&a);
int *ptr;
ptr=&a;
printf("%d %d %d",*ptr,ptr,&ptr);
}