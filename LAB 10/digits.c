#include <stdio.h>
void main(){
    int a,p,i=0;
    printf("enter the number: ");
    scanf("%d",&a);
    while(a>0){
        a=a/10;
        i++;
    }
    printf("digits= %d",i);
}