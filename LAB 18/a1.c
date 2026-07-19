#include<stdio.h>
int sum(int a,int b);
void main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    int result=sum(a,b);
    printf("%d",result); 
}
int sum(int a,int b){
    int g=a+b;
    return g;
}