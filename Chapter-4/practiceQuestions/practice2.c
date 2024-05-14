#include <stdio.h>

int main()
{

    // print sum of n natural numbers
    // n=4 given
    int n;
    int sum = 0;
    printf("Enter number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum is %d \n", sum);

    // Reverse of given n number
    for (int i = n; i >= 1; i--)
    {
        printf("Reverse is %d \n", i);
    }

    return 0;
}