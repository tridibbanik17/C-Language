#include<stdio.h>
int main()
{
  char s1[20] = "Hello ", s2[20] = "World";
  int i, j;
  printf("String 1 is : %s\n", s1);
  printf("String 2 is : %s\n", s2);

  for(i = 0; s1[i] != '\0'; i++);
  for(j = 0; s2[j] != '\0'; j++)
  {
    s1[i] = s2[j];
    i++;
  }

  s1[i] = '\0';

  printf("After concatenation :\n");
  printf("String 1 is : %s\n", s1);
  printf("String 2 is : %s\n", s2);
  return 0;
}