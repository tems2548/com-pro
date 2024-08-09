/*
 * กลุ่มที่  : 24010125
 * 67011036 อังศุชวาล สมิตชาติ
 * chapter : 5	item : 4	ครั้งที่ : 0003
 * Assigned : Thursday 8th of August 2024 11:23:29 AM --> Submission : Thursday 8th of August 2024 11:53:37 AM	
 * Elapsed time : 30 minutes.
 * filename : main (77).c
 */
// Online C compiler to run C program online
// -32 to make major char 
#include <stdio.h>
int a;
int b;

int max;
int min;
int sum;

int main() {
    printf(" *** Display Summation ***\n");
   printf("Enter 2 whole numbers : ");
   scanf("%d%d",&a,&b);
   printf("Summation = ");
   if(a > b){
       max = a;
       min = b;
   }else if(b > a){
       max = b;
       min = a;
   }
   for(int i = min;i <= max;i++){
       if(i == min){
           printf("%d",min);
           sum = min;
       }else{
           printf(" + %d",i);
           sum += i;
       }
   }
   printf(" = %d",sum);
    return 0;
}