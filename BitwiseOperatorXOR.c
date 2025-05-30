#include <stdio.h>

int main() {
  int i = 7; // 0111
  int j = 13; // 1101
  /*
    0111
  ^ 1101
  ______
    1010 
  */
  int k = i ^ j; // 1010 corresponds to 10 in decimal.
  printf("%d ^ %d = %d\n", i, j, k);
  printf("Address of int i = %p\n", (void *)&i);
  printf("Address of int j = %p\n", (void *)&j);
  printf("Address of int k = %p\n", (void *)&k);
  return 0;
}