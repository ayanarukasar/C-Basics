#include <stdio.h>

int main()
{
    int age;
    printf("Enter age:");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("They are adult \n");
        printf("They can vote \n");
    }
    else
    {
        printf("They are not adult \n");
    }

    printf("THANK YOU :) \n");

    return 0;
}