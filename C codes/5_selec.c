#include <stdio.h>
void main ()
{
    int a[100],n,i,j,pos,temp;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n-1;i++)
    {
        pos=i;
        for (j=i;j<n;j++)
        {
            if (a[pos]>a[j])
            {
                pos=j;
            }
        }
        if (pos!=i)
        {
            temp=a[i];
            a[i]=a[pos];
            a[pos]=temp;
        }
    }
    printf("Sorted array elem. in asc order-\n");
    for (i=0;i<n;i++)
    {
        printf ("%d   ",a[i]);
    }
}
