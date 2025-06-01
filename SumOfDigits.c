#include <stdio.h>

int main() {
  int i, sum = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &i);
  while (i > 0) {
    sum += i%10;
    i = i / 10;
  }
  printf("Sum of all digits is %d\n", sum);

  int j, product = 1;
  printf("Enter a positive integer: ");
  scanf("%d", &j);
  while (j > 0) {
    product *= j%10;
    j = j / 10;
  }
  printf("Product of all digits is %d", product);
  return 0;
}