#include <stdio.h>
// Sum of numbers from 1 to n.
int main() {
  int i, j = 1, sum = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &i);
  printf("The sum from 1 to %d is: ", i);
  do {
    sum += j;
    j++;
  } while (j <= i);
  printf("%d\n", sum);
  return 0;
}