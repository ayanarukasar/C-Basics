#include <stdio.h>

int main()
{

    /*
    Steps:
    1. Declare variable name
    2. Write print statement
    3. use scanf to take input using &
    4. print the stored value
    */
    int age;
    printf("Enter age:");
    scanf("%d", &age);
    printf("age is: %d \n", age);

    return 0;
}