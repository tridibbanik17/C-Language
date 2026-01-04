#include<stdio.h>

// Description: This function takes an array of integers and its size as parameters and returns the maximum value in the array.

// Input:

// arr: An array of integers.

// size: Size of the array.

// Output:

// The maximum value in the array.

int findmaximum(int arr[], int size) 
{
  int max = arr[0];
  for(int i = 0; i < size; i++)
  {
    if (arr[i] > max) 
    {
      max = arr[i];
    }
  }
  return max;
}

int main() 
{
  int n;
  printf("Enter the number of elements in the array : ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter %d elements : ", n);
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int max = findmaximum(arr, n);
  printf("Largest element is: %d", max);
  return 0;
}