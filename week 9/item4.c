#include<stdio.h>
#include<string.h>
#include <ctype.h>
void palindrome(char *);
int main() {
    char str[100];
    printf(" ***  Palindrome Verification  ***\n");
    printf(" *  verify only alphabet number  *\n");
    printf(" *        insensitive case       *\n");
    printf(" *-------------------------------*\n");
    printf("Enter a sentence : ");
    scanf("%[^\n]",str);
    printf("Entered message : %s\n",str);
   palindrome(str);
	return 0;
}
void palindrome(char *str){
    int size = strlen(str);
    char start = *str;
    char end = *(str+size-1);
    if(toupper(start) == toupper(end)){
        printf("\"%s\" is PALINDROME.",str);
    }else{
        printf("\"%s\" is NOT palindrom.",str);
    }
}