#include <stdio.h>

// Define a structure to represent time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to add two times
struct Time addTimes(struct Time t1, struct Time t2) {
    struct Time result;

    // Add seconds and convert any excess seconds to minutes
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + result.seconds / 60;
    result.seconds = result.seconds % 60;

    // Add minutes and convert any excess minutes to hours
    result.hours = t1.hours + t2.hours + result.minutes / 60;
    result.minutes = result.minutes % 60;

    // Ensure the hours stay within a 24-hour format
    result.hours = result.hours % 24;

    return result;
}

void main() {
    struct Time t1, t2, result;

    // Prompt the user to enter the first time
    printf("Enter the first time (hh mm ss): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    // Prompt the user to enter the second time
    printf("Enter the second time (hh mm ss): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    // Add the times
    result = addTimes(t1, t2);

    // Print the result
    printf("Resulting time: %02d:%02d:%02d\n", result.hours, result.minutes, result.seconds);
}
