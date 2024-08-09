#include <stdio.h>
int a;
int b;
int i;
int main() {
    printf("Enter 'number' and 'count' : ");
    scanf("%d%d",&a,&b);
    if(b == 0 || b == 1){
    printf("I can move on");
    }else{
    for(i = 1; i < b ;i++){
    if(i == 1){
        printf("%d ",a);
    }
    printf("+ %d ",a);
    }
    
    if(i == b){
    printf("= %d",a*b);
    }
    }

    return 0;
}