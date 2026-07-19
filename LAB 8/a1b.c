#include<stdio.h>
void main()
{
    int i=0,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    do{
        printf("n=%d\n",i);
        i++;
    }
    while(i<=n);
}