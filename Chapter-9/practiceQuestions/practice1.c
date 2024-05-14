#include <stdio.h>
#include <string.h>

// WAP to store data of 3 students
//  user-defined
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

    struct student s2;
    // properties
    s2.roll = 102;
    s2.cgpa = 9.3;
    strcpy(s2.name, "aamir");

    printf("student name = %s\n", s2.name);
    printf("student roll = %d\n", s2.roll);
    printf("student cgpa = %f\n", s2.cgpa);

    struct student s3;
    // properties
    s3.roll = 103;
    s3.cgpa = 7.32;
    strcpy(s3.name, "aajiya");

    printf("student name = %s\n", s3.name);
    printf("student roll = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);

    return 0;
}

/*
student name = ayana
student roll = 101
student cgpa = 8.320000
student name = aamir
student roll = 102
student cgpa = 9.300000
student name = aajiya
student roll = 103
student cgpa = 7.320000
*/