#include <stdio.h>
void main(){
    int a,p=0,x=0;
    printf("enter the number: ");
    scanf("%d",&a);
    p=a%10;
    while(a>0){
        x=a%10;
        a=a/10;
    }
    printf("%d",x+p);
}