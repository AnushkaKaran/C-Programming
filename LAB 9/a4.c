#include<stdio.h>
void main()
{
    int n,i=1,product=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n){
        product=product*i;
        i++;
    }
    printf("Factorial is %d",product);
}