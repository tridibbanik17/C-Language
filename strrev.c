#include<stdio.h>
#include<string.h>

int main()
{
  char str[20];
  printf("Enter a string : ");
  gets(str);
  strrev(str);
  printf("Reversed string is : %s", str);
  return 0;
}