#include<stdio.h>
#include<math.h>
void main()
{
    float sum=0,product=1,harmonicsum=0;
    float avg,geomean,harmonicmean;
    int i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    float arr[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%f",&arr[i]);
        sum+=arr[i];
        product*=arr[i];
        harmonicsum+=1.0/arr[i];
    }
    avg=sum/n;
    geomean=pow(product,1.0/n);
    harmonicmean=n/harmonicsum;
    printf("Average = %.2f\n",avg);
    printf("Geometric mean = %.2f\n",geomean);
    printf("Harmonic mean= %.2f",harmonicmean);
}