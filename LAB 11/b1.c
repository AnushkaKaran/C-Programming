#include<stdio.h>
void main()
{
    int i,n,firstnum=0,secondnum=1,next;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    for(i=0;i<n;i++){
        if(i<=1){
            next=i;
        }
        else{
            next=firstnum+secondnum;
            firstnum=secondnum;
            secondnum=next;
        }
        printf("%d ",next);
    }
}
