#include <stdio.h>
#include <string.h>
struct student
{
    int stid;
    char name[20],dept[20];
}s[5];
int main()
{
    int i,x;
    printf("Enter student details\n");
    for (i=0;i<5;i++)
    {
        printf("Enter student %d id\t",i+1);
        scanf("%d",&s[i].stid);
        printf("Enter student name\t");
        scanf("%s",&s[i].name);
        printf("Enter student department\t");
        scanf("%s",&s[i].dept);
    }
    printf("\nDisplaying students info\n");
    for (i=0;i<5;i++)
    {
        printf("Student Id = %d\t",s[i].stid);
        printf("Student Name = %d\t",s[i].name);
        printf("Student Department = %d\t",s[i].dept);
    }
}