#include <stdio.h>
int factorial(int);

int factorial(int n) {
  int fact = 1;
  if (n < 0) {
    printf("Factorial of a negative integers is not possible.\n");
    printf("Please enter an integer greater than or equal to 0.\n");
    return 1;
  }
  for (int i = 1; i <= n; i++) {
    fact = fact*i;
  }
  /*
  while (n > 0) {
    fact = fact * n;
    n--;
  }
  */
  return fact;
}
int main() {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  printf("The factorial of %d is %d.\n", n, factorial(n));
  return 0;
}