/*
void printHello();
void printTable(int n);
int sum(int a, int b);
*/

#include <stdio.h>

int printSum(int a, int b);

int main()
{

    int a;
    int b;
    printf("Enter number:");
    scanf("%d", &a);
    printf("Enter number:");
    scanf("%d", &b);

    int sum = printSum(a, b);
    printf("%d\n", sum);

    return 0;
}

int printSum(int x, int y)
{
    return x + y;
}