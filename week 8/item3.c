#include <stdio.h>
int num[10];
int temp; 
int diff;
int max_diff;
int main() {
    int size = sizeof(num)/sizeof(int);
    // Write C code here
    // 2 6
    printf(" *** Maximum diference of adjacent number ***\n");
    printf("Enter 10 integers : ");
    for(int k = 0;k < 10;k++){
        scanf("%d",&num[k]);
    }
    for(int j = 0;j < size;j++)
    for(int i = 0;i < size-j-1;i++){
        int diff = num[i+1]-num[i];
        if(diff < 0){
            diff = diff*-1;
        }
      if(max_diff < diff){
          max_diff = diff;
      }
    }
    printf("Maximum differnce is %d",max_diff);

    return 0;
}