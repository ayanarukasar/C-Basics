#include <stdio.h>
#include <string.h>

int main()
{
    char myName[] = "Ayana";
    char hisName[] = "Aamir";

    printf("Comparing: %d", strcmp(myName, hisName));

    // Comparing: 1
    // if borth str are same it will return 0

    return 0;
}
