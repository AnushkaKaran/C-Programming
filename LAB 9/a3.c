#include <stdio.h>

void main() {
    int base, exponent;
    int result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int i = 0;
    while(i < exponent) {
        result *= base;
        i++;
    }

    printf("%d^%d = %d\n", base, exponent, result);

    
}
