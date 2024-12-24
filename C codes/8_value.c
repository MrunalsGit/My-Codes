#include<stdio.h>
int swap (int a, int b);
int main(void) 
{
  int x, y;
  printf("Enter two numbers : \n");
  scanf("%d %d",&x,&y);  
  printf("Before swap 1st number was %d and 2nd number was %d\n", x ,y);
  swap(x,y);
}
int swap (int a, int b) {
int temp;
  temp = a;
  a = b;
  b = temp; 
  printf("After swapping 1st number is %d and 2nd number is %d\n", a ,b);
}
