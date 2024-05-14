#include <stdio.h>

void printAddress(int n);

int main()
{
    // will the output be same: NO
    // call by value --Always No
    // call by reference--yes

    int n = 4;

    printf("%p \n", &n); // 0061FF1C

    printAddress(n);

    return 0;
}

void printAddress(int n)
{
    printf("%p \n", &n); // 0061FF00
}
