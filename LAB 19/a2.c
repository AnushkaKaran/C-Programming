#include<stdio.h>
void crr(int arr[],int n);
void main()
{
    int n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    crr(arr,n);
}
void crr(int arr[],int n)
{
    int i;
    
    for( i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
