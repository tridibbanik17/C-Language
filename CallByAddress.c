#include <stdio.h>
// Call-by-address (Swaps after calling in the main function)
void swap_address(int *i, int *j) {
  int temp = *i;
  *i = *j;
  *j = temp;
}

int main() {
  int i, j;
  printf("Enter two values: ");
  scanf("%d %d", &i, &j);
  printf("Before swap(): i = %d j = %d\n", i, j);
  swap_address(&i, &j);
  printf("After call-by-address: i = %d j = %d\n", i, j);
}