#include <stdio.h>
int main()
{
    int scores[5], i;
    printf("Enter 5 score : ");
    for (i = 0; i < 5; i++)
        scanf("%d", &scores[i]);
    sort(scores);
    printf("Sorted : ");
    for (i = 0; i < 5; i++)
        printf("%d ", scores[i]);
}
void sort(int *p){
    int temp;
    for(int k = 0;k < 5;k++){
        for(int l = k+1;l < 5;l++){
           if(*(p+l) > *(p+k)){
               temp = *(p+k);
               *(p+k) = *(p+l);
               *(p+l) = temp;
           }
        }
    }
}