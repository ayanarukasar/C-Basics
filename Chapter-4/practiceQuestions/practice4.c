#include <stdio.h>

int main()
{

    // print table of a number input by the user
    // n=2 given
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", n * i);
    }

    return 0;
}