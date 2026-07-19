#include<stdio.h>
void main()
{
    int i,n,mul;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        mul=n*i;
        printf("%d x %d = %d\n",n,i,mul);
    }
}