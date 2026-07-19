#include <stdio.h>
void main()
{
    float a, b, c, d, e, total, per;
    printf("enter marks of maths:");
    scanf("%f", &a);
    printf("enter marks of physics:");
    scanf("%f", &b);
    printf("enter marks of chemistry:");
    scanf("%f", &c);
    printf("enter marks of computer:");
    scanf("%f", &d);
    printf("enter marks of hindi:");
    scanf("%f", &e);
    printf("\n");
    total = a + b + c + d + e;
    printf("total is %f\n", total);
    per = (total / 500) * 100;
    printf("percentage is %f\n", per);
    if (per <= 35)
        printf("fail");
    else if (per >= 36 && per < 45)
        printf("pass");
    else if (per >= 46 && per < 60)
        printf("second");
    else if (per >= 61 && per < 70)
        printf("first");

    else
    {

        printf("Distinction");
    }
}