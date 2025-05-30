#include <stdio.h>

int main() {
  int i = 7; // 0111
  /*
  ~ 0111
  _______
    1000 
  */
  int j = ~i; // 1000 corresponds to decimal 8.
  printf("~%d = %d\n", i, j);
  printf("Address of int i = %p\n", (void *)&i);
  printf("Address of int j = %p\n", (void *)&j);
  return 0;
}


 