#include <stdio.h>
int fact(int n) {
  if (n == 0) return 1; // base case
  return n*fact(n - 1); // recursive case
  // Assume n = 5
  // return: 5 * 4! -> 4 * 3! -> 3 * 2! -> 2 * 1! -> 1 * 0! (reached the base case)
  // return back: -> 1 * 0! =  1 * 1
  //              -> 2 * 1! = 2 * 1 * 0! = 2 * 1 * 1 
  //              -> 3 * 2! = 3* 2 * 1! = 3* 2 * 1 * 0! = 3 * 2 * 1 * 1 
  //              -> 4 * 3! = 4 * 3 * 2! = 4 * 3 * 2 * 1! = 4 * 3 * 2 * 1 * 0! = 4 * 3 * 2 * 1 * 1 
  //              -> 5 * 4! = 5 * 4 * 3! = 5 * 4 * 3 * 2! = 5 * 4 * 3 * 2 * 1! = 5 * 4 * 3 * 2 * 1 * 0! = 5 * 4 * 3 * 2 * 1 * 1 
}
int main() {
  int n;
  printf("Enter a value: ");
  scanf("%d", &n);
  printf("The factorial is: %d\n", fact(n));
  return 0;
}