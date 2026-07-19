#include <stdio.h>
#include <string.h>
void replaceCharacter(char *str, char find, char replace) {
    char *ptr = str;
    while ((ptr = strchr(ptr, find)) != NULL) {
        *ptr = replace;
        ptr++;
    }
}
void main() {
    char str[100], find, replace;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the character to find: ");
    scanf(" %c", &find);
    printf("Enter the replacement character: ");
    scanf(" %c", &replace);
    replaceCharacter(str, find, replace);
    printf("Modified string: %s\n", str);
}
