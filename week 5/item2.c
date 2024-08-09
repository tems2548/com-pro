#include <stdio.h>
char txt[500];
int size;
int main() {
    printf("Enter your name : ");
    scanf("%[^\n]",txt);
    for(size = 0; txt[size] != '\0';size++);
    for(int R_size = size; R_size > 0 ;R_size--){
        //printf("%d",txt[size-1]+32);
        printf("%c\n",txt[R_size-1]-32);
    }
    printf("Name length : %d",size);
    return 0;
}