#include <stdio.h>
void removeSpacesAndSpecialChars(char *str);
void main(){
    char str[100];
    printf("Enter string: ");
    gets(str);
    removeSpacesAndSpecialChars(str);
    printf("Modified string : %s\n",str);
} 
void removeSpacesAndSpecialChars(char *str){
    char *intial=str;
    char *final=str;
    while(*intial){
        if ((*intial>='A'&& *intial<='Z')||(*intial>='a'&& *intial<='z')||(*intial>='0'&& *intial<='9') ){
            *final++=*intial;
        }
        intial++;
    }
    *final='\0';

    
}
    