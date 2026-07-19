#include <stdio.h>

void main() {
    int num, i, digit;
    int frequency[10] = {0}; // Array to store frequency of each digit (0-9)

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Count frequency of each digit
    while(num > 0) {
        digit = num % 10;
        frequency[digit]++;
        num = num / 10;
    }

    // Print the frequency of each digit
    printf("Digit frequency in the given number:\n");
    for(i = 0; i < 10; i++) {
        if(frequency[i] != 0) {
            printf("Digit %d: %d times\n", i, frequency[i]);
        }
    }
}
