#include <stdio.h>

int swap(int a, int b);
int _swap(int *a, int *b);

int main()
{
    int x = 15;
    int y = 19;

    // swap(x, y);

    _swap(&x, &y);

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}

// call by value
int swap(int a, int b)
{

    int temp = 0;
    temp = a;
    a = b;
    b = temp;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

// call by reference
int _swap(int *a, int *b)
{

    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("*a = %d\n", *a);
    printf("*b = %d\n", *b);
}