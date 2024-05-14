#include <stdio.h>

int countLength(char arr[]);

int main()
{
    char name[50];
    printf("Enter name: ");

    fgets(name, 50, stdin);
    // puts(name);
    printf("Length is %d", countLength(name));

    return 0;
}

int countLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
        count++;
    }
    return count - 1; // because we dont need null to be counted
    printf("\n");
}

/*
Aamir
Length is 5
*/
