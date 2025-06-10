#include <stdio.h>
void printArray() {
  int arr[6] = {4, 5, 6};
  // int arrSecond[3] = {1,2,3,4,5}; //This is illegal because only memory is allocated for upto 3 items. But the number of items in the array exceeds that limit.
  // int arrThird[2] = { ,2}; // Illegal because C only allows assigning values to memory from the first allocated location. 
  printf("All the elements of the array are: ");
  for (int i = 0; i < 6; i++) {
    printf("%d\t", arr[i]);
  }
  printf("\n\n");
  static int arrForth[3];
  printf("Static arr that initializes values to 0 by default even though not explicitly initialized.\n");
  printf("All elements of the static array are: ");
  for (int j = 0; j < 3; j++) {
    printf("%d\t", arrForth[j]);
  }
  printf("\n\n");
  int arrFifth[3];
  printf("Auto arr that initializes values to garbage value by default even though not explicitly initialized.\n");
  printf("All elements of the uninitialized auto array are: ");
  for (int k = 0; k < 3; k++) {
    printf("%d\t", arrFifth[k]);
  }  
}

int main() {
  printArray();
  printf("\n");
  return 0;
}