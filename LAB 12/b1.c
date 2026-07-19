#include <stdio.h>
void main()
{
    int n, totalsum = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int partialsum = 0;
        for (int j = 1; j <= i; j++)
        {
            partialsum += j;
        }
        totalsum += partialsum;
    }
    printf("The sum of series is %d\n", totalsum);
}