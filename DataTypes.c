#include <stdio.h>
int main() {
  int i = 77;
  float f = 3.14;
  char c = 'A';
  printf("i = %d\n", i); 
  printf("Address of i = %u\n", &i);
  printf("f = %f\n", f);
  printf("Address of f = %u\n", &f);
  printf("c = %c\n", c);
  printf("Address of c = %u\n", &c);
}