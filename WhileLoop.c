#include <stdio.h>

int main() {
  int i = 5;
  int j = 9;
  int k = 100;
  printf("Display all integers from %d to %d:\n", i, j);
  while (i <= j) {
    printf("%d\t", i);
    i++;
  }
  printf("\nDisplay all even integers between %d and %d:\n", k, j);
  while (k >= j) {
    if (k % 2 == 0) {
      printf("%d\t", k);
    }
    k--;
  }
  return 0;
}