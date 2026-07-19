#include<stdio.h>
void main()
{
    int n,mul,div;
    printf("enter the value of n:");
    scanf("%d",&n);
    mul=n<<1;
    div=n>>1;
    printf("value is = %d and %d",mul,div);
}