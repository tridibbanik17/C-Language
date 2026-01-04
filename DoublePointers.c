#include<stdio.h>
int main()
{
  int a = 10, *p, **pp;
  p = &a;
  pp = &p;
  printf("Value of a : %d\n", a);
  printf("Value of single pointer *p : %d\n", *p);
  printf("Value of double pointer **pp : %d\n", **pp);
  return 0;  
}