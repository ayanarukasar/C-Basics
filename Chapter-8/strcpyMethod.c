#include <stdio.h>
#include <string.h>

int main()
{
    char oldStr[] = "Ayana";
    char newStr[] = "Rukasar";

    printf("Interchange from oldString to newString: %s", strcpy(oldStr, newStr));

    return 0;
}

/*
Interchange from oldString to newString: Rukasar
*/
