#include<stdio.h>
int max(int a,int b);
int min(int a,int b);
void main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    int result=max(a,b);
    int res=min(a,b);
    printf("Maximum value is %d\n",result);
    printf("Minimum value is %d",res);
}
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}


