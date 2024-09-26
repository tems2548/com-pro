#include<stdio.h>
#include <string.h>
#define SIZE 10
int main() {
    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];
    printf(" *** Structure Array 2 ***\n");
    printf("Enter data : ");
    for(int i=0;i<SIZE;i++) {
        scanf("%s %s %d",st[i].id,st[i].name,&st[i].marking);
    }
    printf("\n\n");
    int max = 0;
    int temp[200];
    int count=0;
    for(int i=0;i<SIZE;i++) {
       if(max <= st[i].marking){
           max = st[i].marking;
       }
    }
    for(int i=0;i<SIZE;i++) {
       if(max == st[i].marking){
           temp[count] = i;
           count++;
       }
    }
    printf(" *** Analyzing Data ***\n");
    printf("Max marking   = %d points, %d students.\n",max,count);
        for(int k = 0;k < count ;k++){
        printf("%d. ",k+1);
        printf("%s ",st[temp[k]].id);
        printf("%s",st[temp[k]].name);
        printf(" %d\n",max);
    }
}