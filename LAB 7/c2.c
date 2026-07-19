#include <stdio.h>
void main()
{
    int month, days, year;
    printf("Enter the value of year:");
    scanf("%d", &year);
    printf("Enter month: ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days");
        break;
    case 2:
        (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? (printf("29 days")) : (printf("28 days"));
    }
}