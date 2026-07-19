#include<stdio.h>
void main()
{
    int a,b,result=0,i;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    while(i<b){
        result=result+a;
        i++;
    }
    printf("Result of multiplication is %d",result);
}