#include <stdio.h>
void main(){
    int a,i,p;
    printf("enter the num: ");
    scanf("%d",&a);
    for ( i = 1; i <= 10; i++)
    {
        p=a*i;
        printf("%d ",p);
    } 
}