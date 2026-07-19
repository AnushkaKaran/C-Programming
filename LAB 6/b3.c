#include <stdio.h>
void main()
{
    int side1, side2, side3, a, b, c;
    printf("Enter the value of side1,side2 and side3:");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 > side2)
    {
        a = side1;
        b = side2;
    }
    else
    {
        a = side2;
        b = side1;
    }
    if (a > side3)
    {
        c = a;
        a = side3;
    }
    if (side1 == side2 && side2 == side3)
    {
        printf("this is equilateral triangle");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("this is isosceles triangle");
    }
    else if (c *c == a * a + b * b)
        
    {
        printf("this is right angled triangle");
    }
    else
    {
        printf("this is scalene triangle");
    }
}