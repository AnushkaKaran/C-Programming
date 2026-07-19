#include <stdio.h>

void main() {
    char str[100];
    char *ptr = str;
    int length = 0;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    gets(str); // Read the input string

    // Find the length using a pointer
    while(*ptr != '\0') {
        length++;
        ptr++;
    }

    // Print the length of the string
    printf("Length of the string: %d\n", length);
}
