#include<stdio.h>
// Find the maximum value among i, j, and k.
int main() {
  int i, j, k, max;
  printf("Enter three values separated by single space and press enter: ");
  scanf("%d %d %d", &i, &j, &k);
  if (i > j) {
    if (i > k) {
      max = i;
    } else {
      max = k;
    }
  }
  else if (j > k) {
    if (j > i) {
      max = j;
    } else {
      max = i;
    }
  }
  else if (k > i) {
    if (k > j) {
      max = k;
    } else {
      max = j;
    }
  }
  printf("Max value among %d, %d, and %d = %d", i, j, k, max);
  return 0;
}