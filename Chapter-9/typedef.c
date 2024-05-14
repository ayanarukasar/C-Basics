#include <stdio.h>
#include <string.h>

// Nickname: ALias
typedef struct student
{
    int roll;
    float cgpa;
    char name[50];
} stu;

typedef struct computerEngineeringStudent
{
    int roll;
    float cgpa;
    char name[50];
} cse;

int main()
{
    cse s1;
    s1.roll = 101;
    s1.cgpa = 8.32;
    strcpy(s1.name, "ayana");

    printf("name is: %s", s1.name);
    // name is: ayana

    return 0;
}
