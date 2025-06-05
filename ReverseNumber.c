#include <stdio.h>

int reverse(int i) {
  int rev = 0;
  while (i > 0) {
    rev = rev * 10 + i % 10;
    i = i / 10;
  }
  return rev;
}

int main() {
  int i;
  printf("Enter a number: ");
  scanf("%d", &i);
  printf("The reversed number is: %d\n", reverse(i));
  return 0;
}