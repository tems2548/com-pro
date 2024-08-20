// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int  num =19;
   int count = 0;
   int end = 0;
   int val = 9;
for(int i = 0 ; i <= num ; i++){
    for(int j = num ; j > 0 ; j--){
        printf(" %d ",val);
        val--;
        count++;
        if(val < 1){
            val = 9;
        }
        if(count == num){
            count = 0;
            printf("\n");

        }
        }
}
    return 0;
}