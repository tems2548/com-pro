#include <stdio.h>
​
int main() {
    // Write C code here
    int num_lst[10];
    int max=0;
    int min=0;
    printf(" *** Show max * min ***\n");
    printf("Enter 10 integers : ");
    for(int i = 0;i < 10 ;i++){
        scanf("%d",&num_lst[i]);
    }
    
    for(int j = 9;j > 0 ;j--){
        while(num_lst[j] > max){
            max = num_lst[j];
        }
    }
    
        for(int k = 0;k < 10 ;k++){
            if(k == 0){
                min = num_lst[k];
            }else{
        if(num_lst[k] <= min){
            min = num_lst[k];
        }
            }
    }
    printf("%d * %d = %d",max,min,max*min);
    return 0;
}