#include <stdio.h>
// 0+1+1+2+3+5+8+....
// 1st position value -> 0
// 2nd position value -> 1
// 3rd position value -> 1
// 4th position value -> 2
// 5th position value -> 3
// Determine the nth term of the fibonacci series.
// n = number of terms
int fibonacci(int n) {
  if (n == 1) return 0;
  else if (n == 2) return 1;
  else return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
  int n;
  printf("Enter a value: ");
  scanf("%d", &n);
  printf("The sum of the %dth fibonacci series is %d\n", n, fibonacci(n));
  return 0;
}