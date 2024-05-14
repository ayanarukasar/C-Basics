#include <stdio.h>

// two types of conversion : 1. implicit-- compiler khudse karke deta 2. explicit-- jo ham khud krte
int main()
{
    // int a = 1.999999;

    // operator precedence
    // int a = 4 + 9 * 10;

    /*
    same precedence: associativity rule go Left to Right
    output 4:
    int a = 4 * 3 / 6 * 2;
    */
    int a = 4 * 3 / 6 * 2;
    printf("%d", a);

    return 0;
}