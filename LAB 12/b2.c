#include <stdio.h>
void main()
{
    int n;
    double e = 1.0, factorial = 1.0;
    printf("Enter the number of sums :");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        factorial *= i;
        e += 1.0 / factorial;
    }
    printf("The estimated value of e using %d terms is %lf\n", n, e);
}