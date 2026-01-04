#include<stdio.h>
#include<string.h>

int main()
{
  char str[20];
  printf("Enter a string : ");
  gets(str);
  printf("The string-length of %s is : %d\n", str, strlen(str));
  printf("The size of %s is : %d\n", str, sizeof(str));
  return 0;
}