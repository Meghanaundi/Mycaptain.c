#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i =1; i<=rows;++i) {
      for (j = 1; j <= i; ++j) {
         printf("01");
      }
      printf("\n");
   }
   return 0;
}
/*output
 Enter the number of rows: 6
01
0101
010101
01010101
0101010101
010101010101  */
