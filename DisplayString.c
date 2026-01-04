#include<stdio.h>
int main()
{
  char str[20];
  printf("Enter your name : \n");
  gets(str);
  printf("Hello, %s, how are you?", str);
  return 0;
}