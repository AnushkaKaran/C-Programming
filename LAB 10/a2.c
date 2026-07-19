#include <stdio.h>
void main()
{
    int a,count,i=0,sum=0;
    printf("enter the count of number: ");
    scanf("%d",&count);
    while(i<count){
        printf("enter the number: ");
        scanf("%d",&a);
        sum=sum+a;
        i++;
    }
    float avg=sum/count;
    printf(" sum is %d\n ",sum);
    printf("avg is %f",avg);
}