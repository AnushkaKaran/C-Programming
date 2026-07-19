#include <stdio.h>
void main(){
    int a=0,n1,n2,p;
    printf("enter the number: ");
    scanf("%d",&n1);
    n2=n1;
    while(n1>0){
        p=n1%10;
        a=(a*10)+p;
        n1=n1/10;
    }
    if(a==n2){
        printf("palindrome number");
    }
    else printf("not palindrome number");
}