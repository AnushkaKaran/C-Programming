#include <stdio.h>

// Define a structure to represent distance
struct Distance {
    int feet;
    int inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;

    // Add inches and convert any excess inches to feet
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet + result.inches / 12;
    result.inches = result.inches % 12;

    return result;
}

void main() {
    struct Distance d1, d2, result;

    // Prompt the user to enter the first distance
    printf("Enter the first distance (feet inches): ");
    scanf("%d %d", &d1.feet, &d1.inches);

    // Prompt the user to enter the second distance
    printf("Enter the second distance (feet inches): ");
    scanf("%d %d", &d2.feet, &d2.inches);

    // Add the distances
    result = addDistances(d1, d2);

    // Print the result
    printf("Resulting distance: %d feet %d inches\n", result.feet, result.inches);
}
