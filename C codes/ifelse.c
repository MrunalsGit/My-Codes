#include<stdio.h>
void main ()
{
    int a;
    printf("Enter age\t");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("Eligible to vote");
    }
    else
    {
        printf("Not eligible to vote");
    }
}