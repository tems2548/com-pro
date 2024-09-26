#include<stdio.h>
#include<ctype.h>
#include<string.h>
char text[100];
char upper_text[100];
char lower_text[100];
int main() {
    printf("Enter a string : ");
  	scanf("%[^\n]",text);
  	change_cast();
  	printf("Capital : ");
  	printf("%s\n",upper_text);
  	printf("Small : ");
  	printf("%s",lower_text);
}
void change_cast(){
    for(int i = 0;i <= strlen(text);i++){
        upper_text[i] = toupper(text[i]); 
    }
    for(int i = 0;i <= strlen(text);i++){
        lower_text[i] = tolower(text[i]); 
    }
}