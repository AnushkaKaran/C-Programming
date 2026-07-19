#include<stdio.h>
void main()
{
    int i,n,sum=0,count=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    float avg=sum/n;
    for(i=0;i<n;i++){
        if(arr[i]>avg){
            count++;
        }
    }
    printf("Sum = %d\n",sum);
    printf("Average = %.2f\n",avg);
    printf("Elements greater than avg are %d",count);
}   