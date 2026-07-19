#include <stdio.h>

void main()
{
    float basic, hra, da, gross;

    // Input basic salary of employee
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);

    // Calculate HRA and DA based on the given conditions
    if (basic >= 30000)
    {
        hra = basic * 0.30;
        da = basic * 0.95;
        printf("hra and da is %f %f", hra, da);
        scanf("%f %f", &hra, &da);
    }
    else if (basic >= 20000)
    {
        hra = basic * 0.25;
        da = basic * 0.90;
        printf("hra and da is %f %f", hra, da);
        scanf("%f %f", &hra, &da);
    }
    else if (basic >= 10000)
    {
        hra = basic * 0.20;
        da = basic * 0.80;
        printf("hra and da is %f %f", hra, da);
        scanf("%f %f", &hra, &da);
    }
    else
    {
        hra = 0;
        da = 0;
        printf("basic salary should have more than 10000\n");
    }
    gross = basic + hra + da;
    printf("Gross Salary of Employee = %2f\n", gross);
}
