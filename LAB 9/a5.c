#include<stdio.h>
void main()
{
    int i=1,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            printf("Factors are : %d\n",i);
        }
        i++;
    }
}