#include <stdio.h>
int main()
{
    int num = 0;
    printf(" *** Show a number in variety formats. *** \n");
    scanf("%d",&num);
    printf("Enter a whole number : ");
    printf("You have input : %d\n",num);
    printf("You have input : %.2f\n",num*1.);
    printf("Square : %d\n",num*num);
    printf("%d / 17 = %.3f\n",num,num/17.0);
    printf("%d / 23 = %.6f\n",num,num/23.0);
    printf("%d / 37 = %.9f",num,num/37.0);
    return 0;
}
