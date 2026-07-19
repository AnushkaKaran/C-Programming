#include <stdio.h>

void main() {
    int num1, num2, num3, secondLargest;

    // Prompt the user to enter three numbers
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Determine the second largest number using nested if statements
    if ((num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2)) {
        secondLargest = num1;
    } else if ((num2 > num1 && num2 < num3) || (num2 > num3 && num2 < num1)) {
        secondLargest = num2;
    } else {
        secondLargest = num3;
    }

    // Print the second largest number
    printf("The second largest number is: %d\n", secondLargest);
}
