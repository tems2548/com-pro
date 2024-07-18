#include <stdio.h>
char str[];
int main()
{
    printf(" *** Get input from keyboard as string ***\n");
    printf("Please input a string : ");
    scanf("%[^\n]",&str);
    printf("string : %s\n",str);
    printf("string : %.7s\n",str);
    printf("string : %.15s",str);
    return 0;
}
