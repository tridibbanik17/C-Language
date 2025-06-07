#include <stdio.h>
// Call-by-value (Does not swap after calling in the main function)
void swap_value(int i, int j) {
  int temp = i;
  i = j;
  j = temp;
}

int main() {
  int i, j;
  printf("Enter two values: ");
  scanf("%d %d", &i, &j);
  printf("Before swap(): i = %d j = %d\n", i, j);
  swap_value(i, j);
  printf("After call-by-value: i = %d j = %d\n", i, j);
  return 0;
}

