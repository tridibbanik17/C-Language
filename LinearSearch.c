#include <stdio.h>

void search(int a[], int n, int key) {
    int i, pos = -1;
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at position: %d\n", pos);
    }
}

int main() {
    int a[100], i, n, key;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to be searched: ");
    scanf("%d", &key);

    search(a, n, key);

    return 0;
}
