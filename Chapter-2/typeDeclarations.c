#include <stdio.h>

int main()
{

    // DECLARE VARIABLE BEFORE USING IT

    int a = 25;

    // assigning value  of a to b
    int b = a;

    // assigning value  of b to c
    int c = b * 6;

    // assigning 1 to d and declaring new var called e
    int d = 1, e;

    /*
    INVALID
    DO not use before declaring
    int oldAge = 22;
    int newAge = oldAge + years;
    int years = 2;
    */

    int x, y, z;
    x = y = z = 4;

    /*
    INVALID
    Do not declare and assign together
    int p, q, r = 4;
    */

    return 0;
}