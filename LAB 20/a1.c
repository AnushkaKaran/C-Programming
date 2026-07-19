#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char str1[100],str0[100];
    printf("Enter the string:");
    gets(str1);
    strcpy(str0 ,str1);
    strrev(str0);
    if(strcmp(str1,str0)==0){
        printf("String is palindrome");
    }
    else{
        printf("String is not a palindrome ");
    }
}
