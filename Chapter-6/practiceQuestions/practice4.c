#include <stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main()
{

    int x = 3, y = 5;
    int sum, prod, avg;

    doWork(x, y, &sum, &prod, &avg);

    printf("sum is %d, prod is %d, avg = %d\n", sum, prod, avg);

    return 0;
}


// call by value -- a and b 
// call by reference-- sum, prod, avg
void doWork(int a, int b, int *sum, int *prod, int *avg)
{

    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}
