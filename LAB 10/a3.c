#include<stdio.h>
void main()
{
    int i=1,n,count=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            count++;
        }
        i++;
    }
    
    if(count==2){
        printf("%d is prime number",n);
    }
    else{
        printf("It is not a prime number");
    }
}