#include <stdio.h>
#include <string.h>

void slice(char str[], int n, int m);

int main()
{

    char str[] = "AyanaAamir";
    slice(str, 3, 6);

    return 0;

    // naAa
}

void slice(char str[], int n, int m)
{
    char newStr[100]; // to store slice
    int j = 0;

    for (int i = n; i <= m; i++, j++)
    {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr); // printing
}


