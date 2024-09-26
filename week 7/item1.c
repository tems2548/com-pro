#include<stdio.h>
int findmin(int num1,int num2){
    if(num1 < num2){
        return num1;
    }else {
        return num2;
    }
}
int main() {
  	int a,b,c,d;
  	printf(" *** Find min value of 4 inputs ***\n");
   	printf("Enter 4 integers : ");
  	scanf("%d %d %d %d",&a,&b,&c,&d);
  	printf("The minimum number is %d\n",findmin(findmin(a,b),findmin(c,d)));
	return 0;
}