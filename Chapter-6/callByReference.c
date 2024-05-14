#include <stdio.h>

void printSquare(int *n);

int main()
{

    int num = 4;
    printSquare(&num);
    printf("Number: = %d \n", num); // output=16

    return 0;
}

// call by reference: we pass address of variable as argument
//address me hi value change krdi
void printSquare(int *n)
{
    *n = (*n) * (*n);             // 4*4
    printf("Square = %d \n", *n); // output=16
}