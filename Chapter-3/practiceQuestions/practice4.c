#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character:");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("lower case");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("UPPER CASE");
    }

    return 0;
}