/*
 * กลุ่มที่  : 24010125
 * 67011036 อังศุชวาล สมิตชาติ
 * chapter : 5	item : 3	ครั้งที่ : 0001
 * Assigned : Thursday 8th of August 2024 11:15:16 AM --> Submission : Thursday 8th of August 2024 11:23:18 AM	
 * Elapsed time : 8 minutes.
 * filename : main (74).c
 */
// Online C compiler to run C program online
// -32 to make major char 
#include <stdio.h>
char txt[500];
int size;
int main() {
    printf(" *** To Upper Case ***\n");
    printf("Enter a string : ");
    scanf("%[^\n]",txt);
    for(size = 0; txt[size] != '\0';size++);
    printf("Output : ");
    for(int i = 0;i < size ;i++){
        int asc = txt[i];
        if(asc >= 97 && asc <= 122){
            printf("%c",txt[i]-32);
        }else{
            printf("%c",txt[i]);
        }
    }
    return 0;
}