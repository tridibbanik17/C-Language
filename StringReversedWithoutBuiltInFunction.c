#include<stdio.h>

int main()
{
  char str[20] = "Hello";
  int n = 0,i;
  for(i = 0; str[i] != '\0'; i++) 
  {
    n++;
  }
  printf("Reversed string of %s is : ", str);
  for(int j = n - 1; j >= 0; j--)
  {
    printf("%c", str[j]);
  }
  return 0;
}