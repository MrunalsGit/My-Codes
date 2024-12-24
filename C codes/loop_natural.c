#include <stdio.h>
 void main()
{
    int a=1,n,sum=0;
    printf("Enter number upto which you need to find sum of natural number\t");
    scanf("%d",&n);
    while (a<=n) 
    {
        sum=sum+a;
        a++;
    }
    printf("%d is sum of first %d natural numbers",sum,n);
}