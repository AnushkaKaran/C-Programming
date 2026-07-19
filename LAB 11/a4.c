#include<stdio.h>
void main()
{
    int base,exponent,result=1,i;
    printf("Enter the value of base:");
    scanf("%d",&base);
    printf("Enter the value of exponent:");
    scanf("%d",&exponent);
    for(i=1;i<=exponent;i++){
        result=result*base;
    }
    printf("%d^%d = %d",base,exponent,result);


}
