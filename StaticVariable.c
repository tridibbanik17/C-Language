#include <stdio.h>
// Example of auto vs static storage class
void increment() {
  int i = 10;
  static int j = 10; // Static storage class variables corresponding values are accessible across function calls. Initialization occurs only once. So, at each function call, it will take the new updated value.
  printf("i = %d\t", i);
  printf("static j = %d\n", j);
  i++;
  j++;
}

int main() {
  increment();
  increment();
  increment();
  return 0;
}