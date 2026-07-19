#include <stdio.h>
#include <math.h>
void main(){
    int num,p,i=0,x,h,j=0;
    float ans=0;
    printf("enter the number: ");
    scanf("%d",&num);
    h=num;
    j=num;
    while(num>0){
        num=num/10;
        i++;
    }
    while(h>0){
        x=h%10;
        ans+=pow(x,i);
        h/=10;
    }
    if(ans==j) {
        printf("armstrong number");
    }
    else printf("not a armstrong number");
}