#include<stdio.h>
void main()
{
    int i,n,sum=0,max,min;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    float avg=sum/n;
    printf("Maximum number = %d\n",max);
    printf("Minimum number = %d\n",min);
    printf("Sum = %d\n",sum);
    printf("Average = %.3f",avg);
}