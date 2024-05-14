#include <stdio.h>

void printString(char arr[]);

int main()
{
    char firstName[] = "AYANA";

    char lastName[] = "RUKASAR";

    printString(firstName);
    printString(lastName);

    return 0;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }

    printf("\n");
}

/*output
AYANA
RUKASAR
*/