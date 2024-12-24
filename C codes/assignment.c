#include <stdio.h> 
void main() 
{ 
  int a;
    printf("Enter number\n");
    scanf("%d",&a); 
    printf("a += 1: %d\n", a += 1); 
    printf("a -= 1: %d\n", a -= 1); 
    printf("a *= 10: %d\n", a *= 10); 
    printf("a /= 2: %d\n", a /= 2); 
    printf("a <<=1: %d\n", a <<= 1);
    printf("a >>=1: %d\n", a >>= 1);
}