#include <stdio.h>
int sumOfDigits(int);
int main() {
  int i;
  printf("Enter a positive integer: ");
  scanf("%d", &i);
  printf("The sum of digits is: %d\n", sumOfDigits(i));
}

int sumOfDigits(int i) {
  int sum = 0;
  while (i > 0 ) {
    sum += i % 10;
    i = i / 10;
  }
  return sum;
}