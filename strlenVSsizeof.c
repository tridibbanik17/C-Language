#include<stdio.h>
#include<string.h>

int main()
{
  char str[] = "Hello"; 
  /////////////////////////////////////////////////////////////
  // sizeof(str) = strlen() + 1; because of '\0'.
  /////////////////////////////////////////////////////////////
  // printf("Enter a string : ");
  // gets(str);
  printf("The string-length of %s is : %d\n", str, strlen(str));
  printf("The size of %s is : %d\n", str, sizeof(str));
  return 0;
}