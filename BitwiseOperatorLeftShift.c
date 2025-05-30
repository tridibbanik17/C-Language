#include <stdio.h>
/*
  i << pos = i times 2 to the power of pos
*/
int main() {
  int i = 7; // 0111
  int pos = 2; // pos = 2
  /*
    0111 << 2 = 011100
  */
  int k = i << pos; // 011100 corresponds to 7 times 2 to the power of 2 = 28 in decimal.
  printf("%d ^ %d = %d\n", i, pos, k);
  printf("Address of int i = %p\n", (void *)&i);
  printf("Address of int j = %p\n", (void *)&pos);
  printf("Address of int k = %p\n", (void *)&k);
  return 0;
}