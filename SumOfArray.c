#include <stdio.h>

int sumOfArr() {
  int size, i, sum = 0, arr[size];
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  printf("Enter %d values: ", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < size; i++) {
    sum = sum + arr[i];
  }
  printf("Sum of array is: %d\n", sum);
}

int main() {
  sumOfArr();
  return 0;
}