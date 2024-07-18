#include <stdio.h>
float num;
int main()
{
    printf(" *** Convert Fahrenheit to Celcius *** \n");
    printf("Enter temperature in degree Fahrenheit : ");
    scanf("%f",&num);
    printf("%.2f degree Fahrenheit equals %.2f degree celcius.",num,(num-32)/1.8);
    return 0;
}
​