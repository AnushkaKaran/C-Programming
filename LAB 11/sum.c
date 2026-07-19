#include <stdio.h>
void main(){
    int a,i,p;
    printf("enter the num: ");
    scanf("%d",&a);
    for ( i = 1; i <= a; i++)
    {
        p=p+i;
    } 
    printf("%d",p);
}