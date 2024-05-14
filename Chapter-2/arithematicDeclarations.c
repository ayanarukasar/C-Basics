#include <stdio.h>
#include <math.h>

// single var on L.H.S
int main()
{

    /*
    int a = 1, b = 2;
    int sum = a + b;
    int multiply = a * b;

    // in this a * b value is going to assign in variable y not in x
    int x, y = a * b;
    */

    int b, c;
    b = c = 1;
    // VALID
    int a = b + c;

    /*
    INVALID
    int b + c = a;
    */

    int power = pow(b, c);
    //    printf("%d", power);

    // MODULAR Operator
    //    printf("%d", 3%2);
    printf("%d", -3 % 2);
    return 0;
}