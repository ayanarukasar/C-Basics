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
    struct student s1;
    // properties
    s1.roll = 101;
    s1.cgpa = 8.32;
    // s1.name = "ayana";  //expression must be a modifiable lvalue, cant reinitialize as its array
    strcpy(s1.name, "ayana");

    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    return 0;
}

/*
student name = ayana
student roll = 101
student cgpa = 8.320000
*/