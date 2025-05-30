#include <stdio.h>
/*
  i >> pos = i times 2 to the power of pos
*/
int main() {
  int i = 16; // 10000
  int pos = 2; // pos = 2
  /*
    10000 >> 2 = 100
  */
  int k = i >> pos; // 100 corresponds to 16 divided by 2 to the power of 2 = 4 in decimal.
  printf("%d ^ %d = %d\n", i, pos, k);
  printf("Address of int i = %p\n", (void *)&i);
  printf("Address of int j = %p\n", (void *)&pos);
  printf("Address of int k = %p\n", (void *)&k);
  return 0;
}