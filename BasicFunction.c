#include <stdio.h>
/*
  Function components:
  1. function prototype declaration
  2. function call
  3. function parameters: actual parameters and formal parameters
  4. function definition: function header and function body
  5. return statement
*/

int find_max(int, int); // function prototype
void main() {
  int x, y;
  printf("Enter two integer values separated by space: ");
  scanf("%d%d", &x, &y);
  printf("Maximum value is %d\n", find_max(x, y)); // function call to find_max with actual parameters x and y.
}

// function definition of find_max with formal parameters i and j.
int find_max(int i, int j) {
  if (i > j) {
    return i;
  } else {
    return j;
  }
}