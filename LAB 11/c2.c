#include<stdio.h>
void main()
{
    int a,b,result=0,i;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++){
        result=result+a;
    }
    printf("Result is %d",result);
}