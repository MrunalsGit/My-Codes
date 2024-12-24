#include <stdio.h>
 void main()
{
    int a=1,b,sum=0;
    printf("Enter number upto which you need to find sum of natural number\t");
    scanf("%d",&b);
    while (a<=b) 
    {
        sum=sum+a;
        a++;
    }
    printf("%d is sum of first %d natural numbers",sum,b);
}