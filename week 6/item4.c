#include <stdio.h>

int main() {
    // Write C code here
 int row;
 printf("Enter : ");
 scanf("%d",&row);

 int arr[row];
 for(int num = 0;num<=row;num++){
     arr[num] = num+1;
 }
 for(int i = 0;i < row;i++){ 
   for(int j = 0;j < row;j++){
         printf("%d",arr[(i+j)%row]);
   }
   printf("\n");
 }
     
    return 0;
}