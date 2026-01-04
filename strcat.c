#include<stdio.h>
#include<string.h>

int main()
{
  char s1[7] = "Hello ", s2[6] = "World";
  printf("String 1 is : %s\n", s1);
  printf("String 2 is : %s\n", s2);
  strcat(s1, s2);
  printf("After concatenation :\n");
  printf("String 1 is : %s\n", s1);
  printf("String 2 is : %s\n", s2);
  return 0;
}