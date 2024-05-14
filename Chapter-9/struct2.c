#include <stdio.h>
#include <string.h>

// user-defined
struct student
{
    int roll;
    float cgpa;
    char name[50];
};

// Note: declare function after defining structure only
void printInfo(struct student s1);

int main()
{
    struct student s1 = {1, 8.9, "Aamir"};
    printInfo(s1);

    printf("student roll = %d\n", s1.roll); // 1

    return 0;
}

void printInfo(struct student s1)
{
    printf("STUDENT INFO: \n");

    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    s1.roll = 101;
}

/*
STUDENT INFO:
student name = Aamir
student roll = 1
student cgpa = 8.900000
*/
