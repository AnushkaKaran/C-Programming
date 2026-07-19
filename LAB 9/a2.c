#include <stdio.h>

void main() {
    int num, i = 1,mul;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(i <= 10) {
        mul=num*i;
        printf("%d x %d = %d\n", num, i, mul);
        i++;
    }

    
}