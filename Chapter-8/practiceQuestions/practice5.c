#include <stdio.h>

void checkChar(char str[], char ch);

int main()
{
    char name[] = "ayanarukasar";
    char ch = 'a';
    checkChar(name, ch);

    return 0;
}

void checkChar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("Character is present!");
            return;
        }
    }
    printf("Character is NOT present!");
}

// Character is present!