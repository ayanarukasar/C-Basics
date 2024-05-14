#include <stdio.h>

int main()
{
    char name[50];
    printf("Enter name:");
    scanf("%s", name); // here we are not using &name because array is a pointer and char name[] itself is a pointer
    printf("Your name is: %s", name);

    return 0;
}
