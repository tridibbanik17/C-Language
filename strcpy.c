#include<stdio.h>
#include<string.h>

int main()
{
  char str1[6] = "Water", str2[6] = "Hola";
  strcpy(str1, str2); // copy str2 to str1
  printf("String1 is : %s\n", str1);
  printf("String2 is : %s\n", str2);
  return 0;
}