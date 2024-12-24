#include<stdio.h>
int fact(int);
void main()
{
    int x,n;
    printf(" Enter the Number to Find Factorial :");
    scanf("%d",&n);
    x=fact(n);
    printf(" Factorial of %d is %d",n,x);
}
int fact(int n)
{
    if(n==0)
    {
        return(1);
    }
    else if (n==1)
    {
        return(1);
    }
    else
    {
    return(n*fact(n-1));
    }
}