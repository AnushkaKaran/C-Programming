#include <stdio.h>
void main(){
    int a,x,i,p,y,r;
    printf("enter the number: ");
    scanf("%d",&a);
    x=a%10;
    r=a;
    for ( ;a>0;)
    {
        p=a%10;
        a=a/10;
        
    }
    printf("\b%d \b%d",x,r);
}

