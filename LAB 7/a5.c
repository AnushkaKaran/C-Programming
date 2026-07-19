#include<stdio.h>
void main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    (n&1)?(printf("%d is odd",n)):(printf("%d is even",n));
}