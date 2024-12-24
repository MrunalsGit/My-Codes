#include<stdio.h>  
void main()    
{    
int a,sum=0,b;    
printf("Enter a number:");    
scanf("%d",&a);    
while(a>0)    
{    
b=a%10;    
sum=sum+b;    
a=a/10;    
}    
printf("Sum of digits of given number is=%d",sum);
}   