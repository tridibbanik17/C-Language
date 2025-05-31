#include <stdio.h>
int main() {
  int i, j, k, max;
  printf("Enter any three values separated by space and press enter: ");
  scanf("%d %d %d", &i, &j, &k);
  if (i > j && i > k) {
    max = i;
  } else if (j > i && j > k) {
    max = j;
  } else {
    max = k;
  }
  printf("Maximum value is: %d\n", max);
  return 0;
}