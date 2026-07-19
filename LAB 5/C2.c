#include<stdio.h>
void main()
{
    int a;
    printf("enter the value:");
    scanf("%d",&a);
    if(a&1){
        printf("number is odd");
    }
    else{
        printf("number is even");
    }
}