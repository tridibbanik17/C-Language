#include <stdio.h>

int main() {
  int i = 1, j = 2;
  switch (i * j) {
    case 1: printf("%d * %d = %d", i, j, i*j);
    break;
    case 2: printf("%d * %d = %d", i, j, i*j);
    break;
    case 3: printf("%d * %d = %d", i, j, i*j);
    break;
    default: printf("The result is not 1, 2, or 3.");
    return 0;
  }
}