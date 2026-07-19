#include<stdio.h>
void main()
{
    int i=1,n,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            sum=sum+i;
        }
        i=i+1;
    }
    if(sum==n){
        printf("It is a perfect number");
    }
    else{
        printf("It is not a perfct number");
    }
}