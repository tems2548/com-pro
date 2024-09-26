#include <stdio.h>
int main()
{
    int my_wallet, friend_wallet;
    printf("Enter my money, friend money : ");
    scanf("%d %d", &my_wallet, &friend_wallet);
    printf("Me : %4d | Friend : %4d", my_wallet, friend_wallet);
    swap_jutsu(&my_wallet, &friend_wallet);
    printf("\n\n====== Booooom! ======\n\n");
    printf("Me : %4d | Friend : %4d", my_wallet, friend_wallet);
}
void swap_jutsu(int *m,int *f){
    int temp;
    temp = *m;
    *m = *f;
    *f = temp;
}