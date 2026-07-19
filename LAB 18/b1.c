#include<stdio.h>
int fibbo(int n);
void main()
{
    int i,n,firstnum=0,secondnum=1,next;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    int res=fibbo(n);
    printf("Fibonacci series: ");
    printf("%d ",res);
    
    
}
int fibbo(int n){
    int i,next,firstnum=0,secondnum=1;
    for(i=0;i<n;i++){
        if(i<=1){
            next=i;
        }
        else{
            next=firstnum+secondnum;
            firstnum=secondnum;
            secondnum=next;
        }
        return next;
    }
}
