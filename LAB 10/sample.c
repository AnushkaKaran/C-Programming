#include <stdio.h>
void main(){
    int a,b,hcf,lcm,i=2,x=1,p=x;
    printf("enter the both number: ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        while (i < a)
        {
            while(a % i == 0 || b % i == 0)
            {
                if (a % i == 0 || b % i == 0)
                {
                x=x*i;
                a/=i;
                }
            }
        i++;
        }  
     printf("HCF is %d ",x);
    }
}