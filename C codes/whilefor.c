#include<stdio.h>
void main()
{
    int a,sum=0,b;
    printf("Enter number upto which you need to find sum of natural number\t");
    scanf("%d",&b);
    for (a=1;a<=b;a++)
    {
        sum=sum+a;
    }
    printf("Sum of first %d natural no. :  %d",b,sum);
}