#include <stdio.h>

int main() {
    // Write C code here
    int num;
    int star;
    int i;
    printf(" *** Show isosceles triangle ***\n");
    printf("Enter a counting number : ");
   scanf("%d",&num);
   if( num >= 3){
       printf("Output : \n");
   for(int row = 1;row <= num;row++){
       for(int j = 1; j <= num-row;j++){
           printf(" ");
       }
      for(int star = 1;star <= (2*row-1);star++){
          printf("*");
      }

       printf("\n");
   }
}else{
    printf(" --- Incorrect number. ---");
}
    return 0;
}