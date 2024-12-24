#include <stdio.h>
void main()
{
    int a,b,fact;
    fact=b=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&a);
    while(b<=a)
    {
        fact=fact*b;
        b++;
    }
    printf("The Factorial of %d is : %d",a,fact);
}