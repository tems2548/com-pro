#include <stdio.h>
int score;
int main() {
   printf("Enter Number : ");
   scanf("%d",&score);
   printf("%d %s 14",score,score >= 14 ? ">=":"<");
   return 0;
}