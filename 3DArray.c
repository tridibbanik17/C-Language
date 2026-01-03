#include<stdio.h>
void display(int a[][10][10], int p, int q, int r)
{
  int i,j,k;
  printf("Displaying 3D array: \n");
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
    {
      for(k=0;k<r;k++)
      printf("%3d",a[i][j][k]);
      printf("\n");
    }
    printf("\n\n\n");
  }
}
int main()
{
  int a[5][10][10],i,j,k,p,q,r;
  printf("Enter table size, row size & col size: \n");
  scanf("%d%d%d",&p,&q,&r);
  printf("Enter %d elements : \n", p*q*r);
  for(i=0;i<p;i++)
  for(j=0;j<q;j++)
  for(k=0;k<r;k++)
  scanf("%d",&a[i][j][k]);
  display(a,p,q,r);
}