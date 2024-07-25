#include <stdio.h>
//43 = plus
//45 = minus
//47 = divide
//42 = multiply
char operate,op_sym;
int val1,val2,op,ans;
float ans_f;
int main() {
   printf("Enter the operator (+, -, *, /) and two numbers : ");
   scanf("%d %c %d",&val1,&operate,&val2);
   op = operate;
   if(op == 43){
     ans = val1 + val2;
     op_sym = '+';
   }
   else if(op == 45){
     ans = val1 - val2;
     op_sym = '-';
   }
   else if(op == 47){
     ans_f = (val1*1.0)/(val2*1.0);
     op_sym = '/';
   }
   else if(op == 42){
     ans = val1*val2;
     op_sym = '*';
   }
   if(op == 47){
       printf("%d %c %d = %.2f",val1,op,val2,ans_f);
   }else{
   printf("%d %c %d = %d",val1,op,val2,ans);
}
}