#include <stdio.h>
void main(){
    int a,i,p=1;
    printf("enter the number: ");
    scanf("%d",&a);
    for ( i = 1; i <=a; i++)
    {
        p=p*i;
    }
    printf("%d",p);
}
