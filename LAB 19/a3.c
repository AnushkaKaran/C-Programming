#include <stdio.h>
#include <string.h>

void main() {
    char str1[100], str2[100];
    
    // Enter strings
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // strlen
    printf("Length of str1: %lu\n", strlen(str1));

    // strcmp
    int cmpResult = strcmp(str1, str2);
    if (cmpResult == 0)
        printf("str1 and str2 are equal.\n");
    else if (cmpResult < 0)
        printf("str1 is less than str2.\n");
    else
        printf("str1 is greater than str2.\n");

    // strcpy
    char strCopy[100];
    strcpy(strCopy, str1);
    printf("Copied string: %s\n", strCopy);

    // strcat
    char strCat[200];
    strcpy(strCat, str1);
    strcat(strCat, str2);
    printf("Concatenated string: %s\n", strCat);

    // strrev
    char strRev[100];
    strcpy(strRev, str1);
    strrev(strRev);
    printf("Reversed string: %s\n", strRev);

    // strlwr
    char strLower[100];
    strcpy(strLower, str1);
    strlwr(strLower);
    printf("Lowercase string: %s\n", strLower);

    // strupr
    char strUpper[100];
    strcpy(strUpper, str1);
    strupr(strUpper);
    printf("Uppercase string: %s\n", strUpper);
}
