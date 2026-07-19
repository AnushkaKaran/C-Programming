#include <stdio.h>
void main(){
    int n1,n2;
    printf("enter the number: ");
    scanf("%d",&n1);
    while(n1!=0){
        n2=n1%10;
        printf("%d",n2);
        n1=n1/10;
    }
}