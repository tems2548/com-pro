#include <stdio.h>
int val;

int main() {
   printf("Enter Number : ");
   scanf("%d",&val);
   printf("%d is a %s number.",val,val < 0 ? "negative":"positive");
}