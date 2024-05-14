#include <stdio.h>
#include <string.h>

int main()
{

    char password[] = "test";
    char salt[] = "123";
    strcat(password, salt);
    puts(password);

    // test123

    return 0;

}


