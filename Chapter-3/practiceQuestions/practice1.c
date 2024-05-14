#include <stdio.h>

/* 
WAP to check if a student passed or failed 
marks > 30 PASS
marks <= 30 FAIL
*/

int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d", &marks);

    marks > 30 ? printf("PASS \n") : printf("FAIL \n");

    return 0;
}