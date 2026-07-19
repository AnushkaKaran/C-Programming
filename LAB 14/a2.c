#include<stdio.h>
void main()
{
    int i,n,positivecount=0,negativecount=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
    if(arr[i]>0){
        positivecount++;
    }
    else{
        negativecount++;
    }
    }
    printf("There are %d positive numbers and %d negative numbers",positivecount,negativecount);
}
