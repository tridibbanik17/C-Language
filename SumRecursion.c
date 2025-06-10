#include <stdio.h>
// Sum of all integers between n and 0.
int sum(int n) {
  if (n == 1) return 1;
  return n + sum(n - 1);
}
int main() {
  int n;
  printf("Enter a value: ");
  scanf("%d", &n);
  printf("The sum is %d\n", sum(n));
  return 0;
}