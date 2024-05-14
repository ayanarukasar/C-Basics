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
    //initialisation and assignment together
    struct student s1 = {101, 8.9, "Ayana"};
    struct student s2 = {102, 9.9, "Aamir"};
    struct student s3 = {0};    //null will assign

    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    printf("student name = %s\n", s2.name);
    printf("student roll = %d\n", s2.roll);
    printf("student cgpa = %f\n", s2.cgpa);

    printf("student name = %s\n", s3.name);
    printf("student roll = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);

    

    return 0;
}

/*
student name = Ayana
student roll = 101
student cgpa = 8.900000
student name = Aamir
student roll = 102
student cgpa = 9.900000
student name =
student roll = 0
student cgpa = 0.000000
*/