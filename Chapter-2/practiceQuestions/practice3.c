#include <stdio.h>

// write a program to check if the no. even or odd
int main()
{
    int num;
    printf("Enter your number:");
    scanf("%d", &num);
    printf("the output is: %d", num % 2 == 0);


    return 0;
}