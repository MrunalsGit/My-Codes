#include<stdio.h>
void main(void)
{
  int c, d, p, q, m, n, k, tot = 0;
  int a[100][100], b[100][100], mul[100][100];
  printf("Enter number of rows and columns for first matrix \n");
  scanf("%d%d", &m, &n);
  printf("Enter matrix elements : \n");
  for (c = 0; c < m; c++)
  {
    for (d = 0; d < n; d++)
    {
      scanf("%d", &a[c][d]);
    }
  }
  printf("Enter number of rows and columns for second matrix\n");
  scanf(" %d %d", &p, &q);
  if (n != p)
  {
    printf(" Your given matrices cannot be multiplied with each other. \n");
  }
  else
  {
    printf("Enter elements for second matrix \n");
    for (c = 0; c < p; c++)
    {
      for (d = 0; d < q; d++)
      {
        scanf("%d", &b[c][d] );
      }
    }
    for (c = 0; c < m; c++) 
    {
      for (d = 0; d < q; d++) 
      {
        for (k = 0; k < p; k++) 
        {
          tot = tot + a[c][k] * b[k][d];
        }
        mul[c][d] = tot;
        tot = 0;
      }
    }
    printf(" The result of matrix multiplication or product of the matrices is: \n "); 
    for (c = 0; c < m; c++) 
    {
      for (d = 0; d < q; d++)
      {
        printf("%d \t", mul[c][d] );
      }
      printf(" \n ");
    }
  }
}
