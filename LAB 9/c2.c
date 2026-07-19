#include<stdio.h>
void main()
{
    int n,binary=0,place=1;
    printf("Enter the decimal number:");
    scanf("%d",&n);
    while(n>0){
        int remainder=n%2;
        binary=binary+(remainder*place);
        n=n/2;
        place=place*10;
    }
    printf("Binary representation is %d",binary);
    
}