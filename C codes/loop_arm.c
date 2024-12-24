#include <stdio.h>
int main() {
    int a, num, r, b = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &a);
    num = a;
    while (num != 0) 
    {
        r = num % 10;   
        b += r * r * r;
        num /= 10;
    }
    if (b == a)
    {
        printf("%d is an Armstrong number.", a);
    }
    else
    {
        printf("%d is not an Armstrong number.", a);
    }
}