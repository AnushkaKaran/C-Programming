#include<stdio.h>
void main()
{
    int choice,a,b;
    printf("Enter choice between 1 to 4: ");
    scanf("%d",&choice);
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    switch(choice){
        case 1: {
            int sum;
            sum=a+b;
            printf("sum is %d",sum);
        }
        break;
        case 2: {
            int diff;
            diff=a-b;
            printf("diff is %d",diff);
        }
        break;
        case 3: {
            int mul;
            mul=a*b;
            printf("mul is %d",mul);
        }
        break;
        case 4: {
            int div;
            div=a/b;
            printf("div is %d",div);
        }
        break;
        default: {
            printf("Invalid input choice");
        }
    }

}