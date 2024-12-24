#include<stdio.h>
void main()
{
int i,j,arr[2][2] = {10,20,30,40};
for (i=0;i<2;i++)
{
for (j=0;j<2;j++)
{
printf("value of arr[%d][%d] is %d\n",i,j,arr[i][j]);
}
}
}