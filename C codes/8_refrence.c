#include <stdio.h>  
int swap(int *x, int *y);
int main()  
{  
    int a,b;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping the values were a = %d, b = %d\n",a,b);
    swap(&a,&b);  
    printf("After swapping values are a = %d, b = %d\n",a,b);  
}  
int swap (int *x, int *y)  
{  
    int temp;   
    temp = *x;  
    *x=*y;  
    *y=temp;  
}  
