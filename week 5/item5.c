#include <stdio.h>
int a;

int main() {
    printf("Enter number : ");
    scanf("%d",&a);
    if(a <= 0){
      printf("</3");
     }
    for(int i = 1;i <= a;i++){
      printf("I Miss You\n");
    }
    return 0;
}