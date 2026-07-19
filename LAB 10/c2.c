#include <stdio.h>

void main() {
    int num1, num2, temp1, temp2, hcf, lcm;

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Store original numbers to calculate LCM later
    temp1 = num1;
    temp2 = num2;

    // Calculate HCF using while loop
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    hcf = num1;

    // Calculate LCM
    lcm = (temp1 * temp2) / hcf;

    // Print the results
    printf("HCF: %d\n", hcf);
    printf("LCM: %d\n", lcm);
}
