#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    printf("Enter name: ");

    fgets(name, 50, stdin);
    // puts(name);
    printf("Length is %d", strlen(name));

    return 0;
}

/*
Aamir Ayana
Length is 11
*/


