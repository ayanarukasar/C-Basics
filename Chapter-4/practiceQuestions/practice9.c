#include <stdio.h>

int main()
{
    //factorial of a number
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    printf("%d \n", n);

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;
    }

    printf("Factorial is %d \n", fact);

    printf("END!!!");
}