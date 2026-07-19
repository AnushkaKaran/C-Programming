#include<stdio.h>
void main()
{
    int i,n,evencount=0,oddcount=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
    if(arr[i]%2==0){
        evencount++;
    }
    else{
        oddcount++;
    }
    }
    printf("There are %d even numbers and %d odd numbers",evencount,oddcount);
    
}
