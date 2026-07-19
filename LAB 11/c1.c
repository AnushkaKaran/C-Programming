#include <stdio.h>

void main() {
    int num, firstDigit, lastDigit, swappedNum, divisor = 1, temp;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    lastDigit = num % 10; // Get the last digit

    // Find the divisor to extract the first digit
    while(temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }

    firstDigit = temp; // The first digit

    // Remove the first and last digits and calculate the swapped number
    swappedNum = (num % divisor) / 10; // Remove first and last digits
    swappedNum = lastDigit * divisor + swappedNum * 10 + firstDigit;

    // Print the result
    printf("Number after swapping first and last digits: %d\n", swappedNum);
}
