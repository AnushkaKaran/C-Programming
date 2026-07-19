#include<stdio.h>
int fact(int n);
void main()
{
    int n,product=1;
    printf("Enter the value of n :");
    scanf("%d",&n);
    int res=fact(n);
    printf("%d",res);

}
int fact(int n){
    int i,product=1;
    for(i=1;i<=n;i++){
        product=product*i;
    }
    return product;
}

