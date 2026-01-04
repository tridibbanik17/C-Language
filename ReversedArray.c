#include<stdio.h>

// Description: This function takes an array of integers and its size as parameters and reverses the order of the elements in the array.

// Input:

// arr: An array of integers.

// size: Size of the array.

// Output:

// The array should be modified in-place.

void reverseArray(int arr[], int size) 
{
  if (arr == NULL || size == 0)
  {
    return;
  }

  int left = 0;
  int right = size - 1;

  while(left < right) 
  {
    int temp = arr[right];
    arr[right] = arr[left];
    arr[left] = temp;

    left++;
    right--;
  }
}

int main() {
  int n;
  printf("Enter the size of array : ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter %d elements : ", n);
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Original array: ");
  for(int j = 0; j < n; j++)
  {
    printf("%d ", arr[j]);
  }
  printf("\n");

  reverseArray(arr,n);

  printf("Reversed array: ");
  for(int k = 0; k < n; k++)
  {
    printf("%d ", arr[k]);
  }

  return 0;
}
