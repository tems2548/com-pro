#include<stdio.h>
#define SIZE 10
int main() {
    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];
    int i,i_max,i_min;
    float average=0,sum=0;
    printf(" *** Structure Array ***\n");
    printf("Enter data : ");
    for(i=0;i<SIZE;i++) {
        scanf("%s %s %d",st[i].id,st[i].name,&st[i].marking);
    }
    //make sure whether data is as expected.
    /*
    printf("\nOutput : \n");
    for(i=0;i<SIZE;i++) {
        printf("%s %s %d\n",st[i].id,st[i].name,st[i].marking);
    }
    */
    // find max marking
    i_max=0;
    int max_num=0;
    for(int k = 0;k<SIZE;k++){
       while(max_num < st[k].marking){
           max_num = st[k].marking;
       }
    }
    for(int a = 0;a<SIZE;a++){
        if(st[a].marking == max_num){
            i_max = a;
        }
    }
    
 
    // find min marking
    i_min=0;  
    int min_num = st[0].marking;;
    for(int k = 0;k<SIZE;k++){
       while(st[k].marking < min_num){
           min_num = st[k].marking;
       }
    }
    for(int a = 0;a<SIZE;a++){
        if(st[a].marking == min_num){
            i_min = a;
        }
    }

    //calculate average
    for(int j = 0;j < SIZE;j++){
        sum += st[j].marking;
    }
    average = sum/SIZE;
    printf("\n\n *** Analyzing Data ***\n");
    printf("Average marking = %.3f\n",average);
    printf("Min -- Max      = %d --> %d\n",st[i_min].marking,st[i_max].marking);

    return 0;
}