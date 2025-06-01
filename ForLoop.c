#include <stdio.h>
int main() {
  // For loop to compute the factorial of a positive integer.
  int i, factorial = 1;
  printf("Enter a positive integer: ");
  scanf("%d", &i);
  printf("The factorial of %d is ", i);
  for (int j = 1; j <= i; j++) {
    factorial *= j;
  } 
  printf("%d\n", factorial);
  return 0;
}