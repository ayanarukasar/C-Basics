#include <stdio.h>

int main()
{

    // print the numbers from 0 to n, if n is given by user
    // n=4

    int n;
    printf("Enter number:");
    scanf("%d", &n);

    int i = 0;
    while (i <= n)
    {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}