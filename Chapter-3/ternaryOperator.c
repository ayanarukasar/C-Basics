#include <stdio.h>

int main()
{
    int age;
    printf("Enter age:");
    scanf("%d", &age);

    // syntax: (condition) ? printf(true) : printf(false)

    age >= 18 ? printf("They are ADULT \n") : printf("They are not adult \n");

    return 0;
}