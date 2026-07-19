#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter the starting number:");
    scanf("%d", &a);
    printf("Enter the ending number:");
    scanf("%d", &b);
    while (a <= b)
    {
        if (a % 2 == 0)
        {
            printf("%d\n", a);
        }
        a++;
    }
}