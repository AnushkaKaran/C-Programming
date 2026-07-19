#include <stdio.h>
float findMax(float a, float b, float c);
void main() {
    float num1, num2, num3, max;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);
    max = findMax(num1, num2, num3);
    printf("The maximum of %.2f, %.2f, and %.2f is: %.2f\n", num1, num2, num3, max);
}
float findMax(float a, float b, float c) {
    float max = a; 
    if (b > max) {
        max = b; 
    }
    if (c > max) {
        max = c; 
    }
    return max;
}
