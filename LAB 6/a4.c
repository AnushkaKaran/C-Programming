#include <stdio.h>

void main()

{
    int n, last_digit;
    printf("Enter the value of n:");
    scanf("%d", &n);
    last_digit = n % 10;
    if (last_digit % 2 == 0)
    {
        printf("number %d is even", n);
    }
    else if (last_digit % 2 != 0)
    {
        printf("number %d is odd", n);
    }
    else
    {
        printf("invalid input");
    }
}