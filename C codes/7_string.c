#include <stdio.h>
#include <string.h>
void main ()
{
char str1[20] = "Hello ";
char str2[20] = "World!";
strcat(str1, str2);
printf("String Concatenate:  %s\n", str1);

printf("Length of str1:  %d\n", strlen(str1));
printf("Length of str2:  %d\n", strlen(str2));

printf("String Compare:  %d\n", strcmp(str1, str2));

strcpy(str2, str1);
printf("String Copy:  %s\n", str2);
}
