#include <stdio.h>
void main()
{
    char c;
    printf("enter c: ");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("It is vowel");
    }
    else{
        printf("It is a consonant");
    }
}