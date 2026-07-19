#include<stdio.h>
void main()
{
    int count=0,sum=0,square,num=1;
    while(count<10){
        square=num*num;
        if((square%10)==9){
            printf("%d\n",num);
            sum=sum+square;
            count++;
        }
        num++;
    }
    float avg=sum/10.0;
    printf("sum= %d\n",sum);
    printf("avg= %.2f",avg);
}