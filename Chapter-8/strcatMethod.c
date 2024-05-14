#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[] = "Ayana";
    char lastName[] = "Rukasar";

    printf("Concatenating: %s", strcat(firstName, lastName));

    /*
Note: no space
Concatenating: AyanaRukasar
*/

    

    //2nd Method
    char firstStr[] = "Hello";
    char secondStr[] = "World";
    strcat(firstStr, secondStr);
    puts(firstStr);

    //HelloWorld

    return 0;

}


