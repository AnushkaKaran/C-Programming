#include <stdio.h>
void main()
{
    int divisor, dividend, remainder, quotient = 0;

    printf("enter divisor and  dividend:");
    scanf("%d %d", &divisor, &dividend);
    remainder = dividend;
    while (remainder >= divisor)
    {
        remainder = remainder - divisor;
        quotient++;
    }
    printf("quotient=%d\n", quotient);
    printf("reaminder=%d", remainder);
}