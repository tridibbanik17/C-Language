#include <stdio.h>

void sort(int a[], int n) {
  int temp;
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      if (a[i] > a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

void display(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d  ", a[i]);
  }
  printf("\n");
}

int main() {
  int a[10], n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  printf("Enter %d elements: ", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  printf("The unsorted array entered is: ");
  display(a, n);
  printf("The sorted array is: ");
  sort(a, n);
  display(a, n);
  return 0;
}