#include <stdio.h>

int main() {
    // Write C code here
    int row;
    printf("Enter a number (1-16) : ");
    scanf("%d",&row);
    // printf(" *** Show max * min ***\n");
    // printf("Enter 10 integers : ");
    if(row >= 1 && row <= 16){
    for(int i = 1;i <= row ;i++){
        if(i == 1 || i == row){
          for(int j = row ; j > 0;j--){
                printf("%X",j);
            }
        }else{
          for(int j = row ; j > 0;j--){
              if(j == row || j == 1 ) {
                  printf("%X",j);
              }else{
                  printf(" ");
              }
          }
        }
        

      printf("\n");
    }
    }else{
        printf("Out of range ! ! !");
    }

    return 0;
}