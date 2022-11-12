
#include <stdio.h>

struct student
{

    char name[20];
    int studentId;
    int age;
    char school[30];
    int telNo[10];
};
void getDetails();
int main()
{
    getDetails();
    return 0;
}

void getDetails()
{
    struct student s1;
    printf("Enter Name : ");
    scanf(" %[^\n]s", &s1.name);
    printf("Enter Studnt Id : ");
    scanf("%d", &s1.studentId);
    printf("Enter Age : ");
    scanf("%d", &s1.age);
    printf("Enter School : ");
    scanf(" %[^\n]s", &s1.school);
    printf("Enter Telephone Number : ");
    scanf("%d", &s1.telNo);
    printf("\nStudent Details\n- Name \t\t: %s\n- Student Id \t: %d\n- Age \t\t: %d\n- School \t: %s\n ", s1.name, s1.studentId, s1.age, s1.school, s1.telNo);
}