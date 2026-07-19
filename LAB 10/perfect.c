#include <stdio.h>
void main()
{
    int n, i = 1, p;
    printf("enter the number: ");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
        {
            p = i + i;
        }
        i++;
    }
    if (p == n)
    {
        printf("perfect number");
    }
    else
        printf("not perfect number");
}