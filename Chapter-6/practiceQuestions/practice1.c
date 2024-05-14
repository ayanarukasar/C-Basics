#include <stdio.h>

int main()
{

    int *ptr;
    int x;
    
    ptr = &x;
    *ptr = 0;

    printf("x = %d \n", x);
    printf("*ptr = %d \n", *ptr);

    /*
    x = 0 
    *ptr = 0 
    */

    *ptr += 5;
    printf("x = %d \n", x);
    printf("*ptr = %d \n", *ptr);

    /*
    x = 5
    *ptr = 5
    */

    (*ptr)++;
    printf("x = %d \n", x);
    printf("*ptr = %d \n", *ptr);

    /*
    x = 6
    *ptr = 6
    */


    

    return 0;
}