#include<stdio.h>
void main()
{
    int a,b,c,mul;
    printf("Enter the value of a,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    (a>b)?(mul=a*c):(mul=b*c);
    printf("multiply is %d",mul);
}