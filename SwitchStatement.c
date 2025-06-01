#include <stdio.h>

int main() {
  int i = 1, j = 2;
  switch (i + j) {
    case 1: printf("one");
    break;
    case 2: printf("two");
    break;
    case 3: printf("three");
    break;
    default: printf("The result is not 1, 2, or 3.");
  }
  printf("\n--------\n");
  switch (i * j) {
    case 1: printf("one");
    break;
    case 2: printf("two");
    break;
    case 3: printf("three");
    break;
    default: printf("The result is not 1, 2, or 3.");
  }
  printf("\n--------\n");
  switch (i / j) {
    case 1: printf("one");
    break;
    case 2: printf("two");
    break;
    case 3: printf("three");
    break;
    default: printf("The result is not 1, 2, or 3.");
  }
  printf("\n--------\n");
  switch (i) {
    case 1: printf("one");
    break;
    case 2: printf("two");
    break;
    case 3: printf("three");
    break;
    default: printf("The result is not 1, 2, or 3.");
  }
  return 0;
}