#include <stdio.h>

int main()
{
    /*
    METHOD 1:
    '/n' prints in a new line
    */
    printf("Hello C \n");
    printf("Hello C \n");
    printf("Hello C \n");
    printf("Hello C \n");
    printf("Hello C \n");

    /*
    METHOD 2:
    using format specifiers
    %d for int
    %f for float
    %c for character
    these format specifiers replaces variable values
    %d will replace age
    */
    int age = 25;
    float pi = 3.14;
    char percentage = '%';

    printf("age is %d \n", age);
    printf("decimal value is %f \n", pi);
    printf("char is %c \n", percentage);

    return 0;
}