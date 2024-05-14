#include <stdio.h>
#include <string.h>

// user-defined
struct student
{
    int roll;
    float cgpa;
    char name[50];
};

int main()
{
    struct student cse[100];
    // properties
    cse[0].roll = 101;
    cse[0].cgpa = 8.32;
    strcpy(cse[0].name, "ayana");

    printf("student name = %s\n", cse[0].name);
    printf("student roll = %d\n", cse[0].roll);
    printf("student cgpa = %f\n", cse[0].cgpa);

    return 0;
}

/*
student name = ayana
student roll = 101
student cgpa = 8.320000
*/