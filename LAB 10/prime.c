#include <stdio.h>
void main()
{
    int n, i = 2, d = 0;
    printf("enter the number: ");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
        {
            d++;
        }
        i++;
    }
    if (d == 0)
    {
        printf("prime number");
    }
    else
        printf("not a prime nummber");
}