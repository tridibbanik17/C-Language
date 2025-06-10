#include <stdio.h>
void printArray() {
  int arr[6] = {4, 5, 6};
  printf("All the elements of the array are: ");
  for (int i = 0; i < 6; i++) {
    printf("%d\t", arr[i]);
  }
  printf("\n");
}

int main() {
  printArray();
  return 0;
}