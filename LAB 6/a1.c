#include <stdio.h>
void main()
{
    int choice;

    printf("Enter the choice:");
    scanf("%d", &choice);
    int a, b, sum, diff, mul, div;
    printf("Enter the value of a and b:");
    scanf("%d %d", &a, &b);
    if (choice == 1)
    {
        sum = a + b;
        printf("sum is %d", sum);
    }
    else if (choice == 2)
    {
        diff = a - b;
        printf("diff is %d", diff);
    }
    else if (choice == 3)
    {
        mul = a * b;
        printf("mul is %d", mul);
    }
    else if (choice == 4)
    {
        div = a / b;
        printf("div is %d", div);
    }
    else
    {
        printf("invalid input");
    }
}
