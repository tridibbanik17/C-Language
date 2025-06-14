// Find the frequency of a given element in a sorted array.
#include <stdio.h>
// a[] is the sorted int array, n is the array size, and i is the element to search for.
int freqCounter(int a[], int n, int i) {
  int index, count = 0;
  for (index = 0; index < n; index++) {
    if (a[index] > i) break;
    if (a[index] == i) {
      count++;
    }
  }
  return count;
}
int main() {
  int a[10], n, index, i;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  printf("Enter %d elements\n", n);
  for (index = 0; index < n; index++) {
    scanf("%d", &a[index]);
  }
  printf("Enter the element to be searched for: \n");
  scanf("%d", &i);
  printf("Frequency of %d is %d\n", i, freqCounter(a, n, i));
  return 0;
}