#include <stdio.h>
int count = 0;
int num[8][10] = {    2,    3,     5,     7,  11,  13,   17,   19,   29,  31, 

                      			  37,  41,   43,   37,  61,  71,   73,   79,   83,  97, 

                      			103, 107, 109, 113, 131, 151, 181, 191, 193, 173, 

                      			163, 113, 102, 107, 127, 137, 257, 139, 149, 369,

                      			212, 224, 236, 248, 313, 326, 339, 341, 355, 368,

                      		 	   2,    4,     6,     6,  10,   12,   14,   16,   18,  20, 

                      			   1,    3,     5,     7,    9,   11,   13,   17,   19,  21, 

                     			163, 113, 102, 107, 127, 137, 257, 139, 149, 369 };

int main() {
    // Write C code here
    int a;
    printf(" *** Find a value in array 2 dimension ***\n");
    printf("Enter a value : ");
    scanf("%d",&a);
    
    for(int r = 0;r < 8;r++){
    for(int c = 0;c < 10;c++){
       printf("%5.d",num[r][c]);
      }
      printf("\n");
    }
    printf("\n");
    
printf("Finding value => %d\n",a);
for(int r = 0;r < 8;r++){
    for(int c = 0;c < 10;c++){
      if(num[r][c] == a){
          count++;
          
          //printf("%d",num[r][c]);
          printf("%d. (row,column) => (%d,%d)\n",count,r+1,c+1);
      } 
    }
}if(count == 0){
    printf(" --- !!! NOT FOUND !!! ---");
} 
    


    return 0;
}