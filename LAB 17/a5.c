#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int *ptr;
    int arr[n];
    ptr=arr;
    printf("Enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
    printf("%d ",*(ptr+i));
    }
}