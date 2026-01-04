#include<stdio.h>

void find_sum(int *ptr1, int *ptr2)
{
  int result;
  result = *ptr1 + *ptr2;
  printf("Result after adding is : %d\n", result);
}

int main()
{
  int a, b;
  printf("Enter any two values : ");
  scanf("%d %d", &a, &b);
  find_sum(&a, &b);
  return 0;
}