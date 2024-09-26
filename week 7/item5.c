#include<stdio.h>

int min;

int max;

// void computeMinMax(int,int,int,int);

int main() {

  	int a,b,c,d;

  	printf(" *** Find Min and Max value of 4 inputs ***\n");

   	printf("Enter 4 integers : ");

  	scanf("%d %d %d %d",&a,&b,&c,&d);

  	computeMinMax(a,b,c,d);

  	printf("The minimum number is %d\n",min);

    printf("The maximum number is %d\n",max);

	return 0;

}
int computeMinMax(int num1,int num2,int num3,int num4){
    int i = 0;
    int num_index[] = {
        num1,
        num2,
        num3,
        num4
    };
    max,min = num_index[0];
    for(int i = 0; i<=3;i++){
    while(num_index[i] < min){
       min = num_index[i];
    }
    }
    
   for(int i = 0; i<=3;i++){
    while(num_index[i] > max){
       max = num_index[i];
    }
    }
  }
