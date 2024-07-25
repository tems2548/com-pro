#include <stdio.h>
char alp;
int asc_char;
int main() {
   printf("Enter Alphabet : ");
   scanf("%c",&alp);
   asc_char = alp;
   printf("%s",asc_char == 66 ? "YES":"NO");
   return 0;
}