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
    // initialisation and assignment together

    struct student s1 = {101, 8.9, "Ayana"};
    printf("student name = %s\n", s1.name);

    struct student *ptr = &s1;
    // it will print whole student struc info
    // printf("student info = %s\n", (*ptr));

    // it will print only name
    printf("student name = %s\n", (*ptr).name);
    printf("student roll = %d\n", (*ptr).roll);
    printf("student cgpa = %f\n", (*ptr).cgpa);

    /*
    student name = Ayana
    student name = Ayana
    student roll = 101
    student cgpa = 8.900000
    */

    // Arrow Operator
    printf("student name = %s\n", ptr->name);
    printf("student roll = %d\n", ptr->roll);
    printf("student cgpa = %f\n", ptr->cgpa);

    /*
    student name = Ayana
    student roll = 101
    student cgpa = 8.900000
    */

    return 0;
}
