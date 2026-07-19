#include <stdio.h>
void main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c", &ch);
    (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') ? (printf("It is an alphabet")) : (printf("It is not an alphabet"));
}