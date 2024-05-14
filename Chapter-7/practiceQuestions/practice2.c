#include <stdio.h>

int main()
{
    int age = 25;
    int *ptr = &age;

    int _age = 29;
    int *_ptr = &_age;

    printf("difference: %u \n", ptr - _ptr);    //1 dono me kitne integers ka df h

    _ptr = &age;
    printf("comparison: %u \n", ptr == _ptr);   //1




    return 0;
}