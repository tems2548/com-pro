#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,n1,n2,diff,sum=0;

    printf("Enter a number (100-995) : ");
    scanf("%d",&n);
    if(n<100 || n>995)
    {
        printf("Out of range : %d",n);
        return 0;
    }
    for(n1 = n; n1<=n+4 ; n1++)
    {
        n2 = (n1%10)*100 + (n1/10%10)*10 + n1/100;
        printf("| %3d - %-3d | = ",n1,n2);
        diff = abs(n1-n2);
        printf("%3d",diff);
        sum += diff;
        printf("\n");
    }
    printf("summation : %d",sum);
    
    return 0;
}