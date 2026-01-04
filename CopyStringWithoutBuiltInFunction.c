#include<stdio.h>

int main()
{
  char str1[6], str2[6] = "Hola";
  int j;
  for(j = 0; str2[j] != '\0'; j++)
  {
    str1[j] = str2[j];
  }
  str1[j] = '\0';
  printf("String1 is : %s\n", str1);
  printf("String2 is : %s\n", str2);
  return 0;
}