#include <stdio.h>
float SimpleInterest(float principal, float rate, float time);
void main() {
    float principal, rate, time, interest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period in years: ");
    scanf("%f", &time);
    interest = SimpleInterest(principal, rate, time);
    printf("The simple interest is: %.2f\n", interest);
}
float SimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}
