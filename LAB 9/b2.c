#include <stdio.h>

void main()
{
    int num;

    // Prompt the user to enter a decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("roman number: ");

    // Convert and print Roman numerals using while loop
    while (num != 0)
    {
        if (num >= 1000)
        {
            printf("M");
            num -= 1000;
        }
        else if (num >= 900)
        {
            printf("CM");
            num -= 900;
        }
        else if (num >= 500)
        {
            printf("D");
            num -= 500;
        }
        else if (num >= 400)
        {
            printf("CD");
            num -= 400;
        }
        else if (num >= 100)
        {
            printf("C");
            num -= 100;
        }
        else if (num >= 90)
        {
            printf("XC");
            num -= 90;
        }
        else if (num >= 50)
        {
            printf("L");
            num -= 50;
        }
        else if (num >= 40)
        {
            printf("XL");
            num -= 40;
        }
        else if (num >= 10)
        {
            printf("X");
            num -= 10;
        }
        else if (num >= 9)
        {
            printf("IX");
            num -= 9;
        }
        else if (num >= 5)
        {
            printf("V");
            num -= 5;
        }
        else if (num >= 4)
        {
            printf("IV");
            num -= 4;
        }
        else if (num >= 1)
        {
            printf("I");
            num -= 1;
        }
    }
}
