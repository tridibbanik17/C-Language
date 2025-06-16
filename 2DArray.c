#include <stdio.h>

// Function to display the matrix
void displayMatrix(int a[10][10], int m, int n) {
  printf("Displaying matrix:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int a[10][10], m, n, i, j;

  printf("Enter row & col size: ");
  scanf("%d%d", &m, &n);

  printf("Enter %d elements: ", m * n);
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  // Call the display function
  displayMatrix(a, m, n);

  return 0;
}
