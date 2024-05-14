#include <stdio.h>

void printSquare(int n);

int main()
{

    int num = 4;
    printSquare(num); 
    printf("Number: = %d \n", num); //output=4

    return 0;
}

//call by value: we pass value of variable as argument
void printSquare(int n)
{
    n = n * n;
    printf("Square = %d \n", n); //output=16
}