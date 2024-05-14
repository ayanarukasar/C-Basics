#include <stdio.h>

int main()
{

    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d \n", _age);

    // address
    // printf("%p \n", &age); //hexadecimal
    printf("%u \n", &age); // stores address --6422292
    printf("%u \n", ptr);  // stores address --6422292

    printf("%u \n", &ptr); // stores address --6422292

    // print value of pointers

    printf("%d \n", age);
    printf("%d \n", *ptr);
    printf("%d \n", *(&age));

    return 0;
}