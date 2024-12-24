#include <stdio.h> 
void main() 
{ 
  int a,b;
  printf("Enter numbers");
  scanf("%d%d",&a,&b); 
    printf("a & b: %d\n", a & b); 
    printf("a | b: %d\n", a | b); 
    printf("a ^ b: %d\n", a ^ b); 
    printf("~a: %d\n", ~a); 
    printf("a >> b: %d\n", a >> b); 
    printf("a << b: %d\n", a << b); 
}