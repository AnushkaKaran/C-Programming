#include <stdio.h>
#include <string.h>

void main() {
    char str[100], ch;
    char *ptr;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to find: ");
    scanf(" %c", &ch);
    ptr = strchr(str, ch);
    if (ptr) {
        printf("Character '%c' found at position %ld in the string.\n", ch, ptr - str + 1);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }
}
