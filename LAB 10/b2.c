#include <stdio.h>
void main(){
    int number, i;
    int isprime=1;//Flag variable
    printf("enter the num: ");
    scanf("%d",&number);
    if(number<=1){
        isprime=0;
    }
    else{
        for(i=2;i<=number/2;i++){
            if(number%i==0){
                isprime=0;
                break;
            }
        }
    }
    if(isprime){
        printf("%d is prime number.\n",number);
    }
    else{
        printf("%d is not a prime number.\n",number);
    }
}