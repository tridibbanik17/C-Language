#include<stdio.h>
int main()
{
  int a = 10, *p, **pp;
  p = &a;
  pp = &p;
  **pp = *p + 25;
  printf("Updated value of a : %d\n", a);
  return 0;
}