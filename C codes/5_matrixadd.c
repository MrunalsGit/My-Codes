#include <stdio.h>
void main()
{
int r,c,a[100][100],b[100][100],sum[100][100],i,j;
printf("Enter number of rows below 100: ");
scanf("%d",&r);
printf("Enter number of columns below 100: ");
scanf("%d",&c);
printf("Enter elements of 1st matrix:\n");
for(i=0;i<r;++i)
{
for(j=0;j<c;++j)
{
printf("Enter element a%d%d: ",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("Enter elements of 2nd matrix:\n");
for(i=0;i<r;++i)
{
for(j=0;j<c;++j)
{
printf("Enter element a%d%d: ",i+1,j+1);
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r;++i)
{
for(j=0;j<c;++j)
{
sum[i][j]=a[i][j]+b[i][j];
}
}
printf("Sum of two matrix is:\n");
for(i=0;i<r;++i)
{
for(j=0;j<c;++j)
{
printf("%d ",sum[i][j]);
if (j==c-1)
printf("\n");
}
}
}
