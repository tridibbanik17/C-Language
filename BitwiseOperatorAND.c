#include <stdio.h>

int main() {
  int i = 7; // 0111
  int j = 13; // 1101
  /*
    0111
  & 1101
  _______
    0101 
  */
  int k = 7 & 13; // 0101 corresponds to decimal 5.
  printf("%d & %d = %d\n", i, j, k);
  printf("Address of int i = %p\n", (void *)&i);
  printf("Address of int j = %p\n", (void *)&j);
  printf("Address of int k = %p\n", (void *)&k);
  return 0;
}