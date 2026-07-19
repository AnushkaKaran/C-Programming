#include <stdio.h>
void main()
{
    float amount, bill, unit;
    printf("Enter the unit:");
    scanf("%f", &unit);
    if (unit <= 50)
    {
        amount = unit * 0.50;
    }
    else if (unit <= 150)
    {
        amount = (50 * 0.50) + (unit - 50) * 0.75;
    }
    else if (unit <= 250)
    {
        amount = (50 * 0.50) + (150 * 0.75) + (unit - 150) * 1.20;
    }
    else
    {
        amount = (50 * 0.50) + (150 * 0.75) + (250 * 1.20) + (unit - 250) * 1.50;
    }
    bill = amount * 0.20 + amount;
    printf("bill is %f", bill);
    
}