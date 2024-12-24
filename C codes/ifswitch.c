#include <stdio.h>
 void main() {
    int a;
    printf("Enter weekday number (1-7):\t");
    scanf("%d",&a);
    switch(a)
    {
        case 1: 
            printf("1 - Sunday");
            break;
        case 2: 
            printf("2 - Monday");
            break;
        case 3: 
            printf("3 - Tuesday");
            break;
        case 4: 
            printf("4 - Wednesday");
            break;
        case 5: 
            printf("5 - Thursday");
            break;
        case 6: 
            printf("6 - Friday");
            break;
        case 7: 
            printf("7 - Saturday");
            break;
        default:
            printf("%d : Enter proper day number",a);
    }
}