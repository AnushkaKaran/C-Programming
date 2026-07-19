#include<stdio.h>
void main()
{
    int i,j,count=0,n;
    printf("Enter the number of element:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements : %d\n",count);
}
