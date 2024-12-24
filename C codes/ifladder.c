#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number\t");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Positive");
    }
    else if (a<0)
    {
        printf("Negative");
    }
    else 
    {
        printf("Zero");;
    }
}