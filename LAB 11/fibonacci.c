#include <stdio.h>
void main(){
    int i,p=0,x=0,y=1,a;
    printf("enter the number of terms: ");
    scanf("%d",&a);
    printf("%d %d ",x,y);
    for ( i = 2; i < a; i++)
    {
        p=x+y;
        printf("%d ",p);
        x=y;
        y=p;
    }   
}