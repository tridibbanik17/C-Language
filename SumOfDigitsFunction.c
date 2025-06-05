#include <stdio.h>
int sumOfDigits(int);
int main() {
  int i;
  printf("Enter a positive integer: ");
  scanf("%d", &i);
  printf("The sum of digits is: %d\n", sumOfDigits(i));
}

int sumOfDigits(int i) {
  int sum = 0; // initialize sum
  while (i > 0 ) {
    sum += i % 10; // Extract the last digit from i and add it to sum
    i = i / 10; // Remove the last digit and proceed to next iteration
  }
  return sum;
}
