#include<stdio.h>
int main()
{
    int digit;
    printf("Enter the didit");
    scanf("%d",&digit);
    switch(digit){
        case 0:printf("Zero ");
        break;
         case 1:printf("One ");
        break;
         case 2:printf("Two ");
        break;
         case 3:printf("Three ");
        break;
         case 4:printf("Four ");
        break;
         case 5:printf("Five ");
        break;
         case 6:printf("Six ");
        break;
         case 70:printf("Seven ");
        break;
         case 8:printf("Eight ");
        break;
         case 9:printf("Nine ");
        break;
    }
    int num,reversed=0;
    while(num!=0){
        reversed=reversed*10+num%10;
        num/=10;
    }
    return reversed;
    int num1,reversed1;
    printf("enter a number:");
    scanf("%d",&num1);
    
}
