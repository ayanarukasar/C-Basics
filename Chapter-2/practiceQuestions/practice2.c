#include <stdio.h>

// write a program to check if the no. is divisible by 2 or not
int main()
{
    int num;
    printf("Enter your number:");
    scanf("%d", &num);
    printf("the output is: %d", num % 2 == 0);


    return 0;
}