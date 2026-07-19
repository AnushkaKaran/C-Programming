#include <stdio.h>
void main() {
    int num, reversed = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    while(reversed > 0) {
        digit = reversed % 10;
        printf("%d ", digit);
        reversed /= 10;
    }
    
    printf("\n");
}
