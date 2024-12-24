#include <stdio.h>
void main() {
  int a, rev = 0, remainder, num;
    printf("Enter an integer: ");
    scanf("%d", &a);
    num = a;
    while (a != 0) {
        remainder = a % 10;
        rev = rev * 10 + remainder;
        a /= 10;
    }
    if (num == rev)
    {
        printf("%d is a palindrome.", num);
    }
    else
    {
        printf("%d is not a palindrome.", num);
    }
}