#include<stdio.h>
void main()
{
    int divisor,dividend,remainder,quotient;
    printf("Enter the divisor: ");
    scanf("%d",&divisor);
    printf("Enter the value of dividend:");
    scanf("%d",&dividend);
    remainder=dividend;
    while(divisor<=remainder){
        remainder=remainder-divisor;
        quotient++;
    }
    printf("Quotient= %d ",quotient);
    printf("remainder= %d ",remainder);
}