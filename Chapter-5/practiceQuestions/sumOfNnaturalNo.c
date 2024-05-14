#include <stdio.h>

int printSum(int n);

int main()
{

    printf("Sum is %d", printSum(5));

    return 0;
}

//recursion
int printSum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int sumOfNminusOne = printSum(n - 1); // sum of 1 -to- n
    int totalSum = sumOfNminusOne + n;
    return totalSum;
}
