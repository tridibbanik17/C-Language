#include <stdio.h>

int update(int i, int *j) {
  i = i + 100; // Call-by-value implementation
  *j = *j + 100; // Call-by-reference implementation
  return i;
}

int main() {
  int i, j;
  printf("Enter two values: ");
  scanf("%d %d", &i, &j);
  i = update(i, &j);
  printf("After update: i = %d and j = %d\n", i, j);
  return 0;
}