#include <stdio.h>

int main()
{
    /*
    STRUCTURE:
    char str[100];
    // gets(fullName);
    fgets(str, 50, stdin);
    puts(str);
    */

    char fullName[50];
    printf("Enter name:");
    // gets(fullName);
    fgets(fullName, 50, stdin);
    puts(fullName);

    return 0;
}
