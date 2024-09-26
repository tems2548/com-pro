#include <stdio.h>
int num[10];
int temp; 
int main() {
    int size = sizeof(num)/sizeof(int);
    // Write C code here
    // 2 6
        printf(" *** Ascending sort ***\n");
    printf("Enter 10 whole numbers : ");
    for(int k = 0;k < 10;k++){
        scanf("%d",&num[k]);
    }
    for(int j = 0;j < size;j++)
    for(int i = 0;i < size-j-1;i++){
        if(num[i+1] < num[i]){
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp; 
        }
    }
    printf("Output : ");
    for(int j = 0;j < size;j++){
        printf("%d ",num[j]);
    }
    return 0;
}