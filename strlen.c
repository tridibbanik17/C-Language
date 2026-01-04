#include<stdio.h>

int main()
{
  int n = 0, i = 0;
  char str[30];
  printf("Enter a string : ");
  gets(str);
  // for(int i = 0; str[i] != '\0'; i++)
  // {
  //   n++;
  // }

  while(str[i] != '\0')
  {
    n++;
    i++;
  }

  printf("The length of the string is : %d", n);
  return 0;
}
