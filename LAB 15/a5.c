#include <stdio.h>
#include <string.h>
void main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); 
    int length = strlen(str);
    printf("You entered: %s\n", str);
    printf("Length of the string: %d\n", length);
}
