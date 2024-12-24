#include<stdio.h>
int square(int x);
void main()
{
     int number, answer;    
     printf("Enter your number:");
     scanf("%d", &number);    
     answer = square(number);  //Call function.
     printf("Square of %d is %d.", number, answer);
}
int square(int x)
{
     return(x*x);
}
