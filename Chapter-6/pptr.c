#include <stdio.h>

int main()
{

    // float price = 100.00;
    // float *ptr = &price;
    // float **pptr = &ptr;

    // Task print the value of 'i' from its pointer to pointer

    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("Value of i with the help of pptr %d", (**pptr));

    return 0;
}