#include<stdio.h>
#include<stdlib.h>

// Write a program in C to find the frequency of each element in an array of integers.

/* Comparison function for qsort */
int cmp_int(const void *a, const void *b) {
    int ia = *(const int *)a;
    int ib = *(const int *)b;
    return (ia > ib) - (ia < ib);  // returns 1, 0, or -1
}

void print_frequencies(int arr[], int size) {
    if (arr == NULL || size <= 0) {
        printf("Array is empty or NULL.\n");
        return;
    }

    // Sort the array in-place
    qsort(arr, (size_t)size, sizeof(int), cmp_int);

    // Count frequencies by scanning consecutive equal elements
    int current = arr[0];
    int count = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == current) {
            count++;
        } else {
            printf("%d -> %d\n", current, count);
            current = arr[i];
            count = 1;
        }
    }
    // Print the last group
    printf("%d -> %d\n", current, count);
}

int main(void) {
    int n;
    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int *arr = (int *)malloc((size_t)n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            free(arr);
            return 1;
        }
    }

    printf("\nFrequencies:\n");
    print_frequencies(arr, n);

    free(arr);
    return 0;
}
