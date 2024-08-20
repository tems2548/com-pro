// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int  num;
    printf("input (1-20) : ");
    scanf("%d",&num);
    printf("\n");
   int count = 0;
   int end = 0;
   int val = 9;
for(int i = 1 ; i <= num ; i++){
    for(int j = num ; j > 0 ; j--){
            if(count == num){
            count = 0;
            printf("\n");
        }
        printf(" %d ",val);
        val--;
        count++;
        if(val <= 0){
            val = 9;
        }

        }
}
    return 0;
}