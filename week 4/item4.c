#include <stdio.h>
int val1,val2,val3,ans;

int main() {
   printf("Enter 3 Number : ");
   scanf("%d%d%d",&val1,&val2,&val3);
   ans = val1+val2+val3;
   printf("ANSWER = %d\n",ans);
   printf("%s",(ans/10)%2 == 0 ? "EVEN":"ODD");

}