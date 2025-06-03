#include <stdio.h>
int find_gcd(int, int);

int main() {
  int i, j;
  printf("Enter any two positive integers: ");
  scanf("%d%d", &i, &j);
  printf("The GCD is: %d", find_gcd(i, j));
}

int find_gcd(int i, int j) {
  int k, result;
  int min = i < j ? i : j;
  for (k = 1; k <= min; k++) {
    if ((i % k == 0) && (j % k == 0)) {
      result = k;
    }
  }
  return result;
}