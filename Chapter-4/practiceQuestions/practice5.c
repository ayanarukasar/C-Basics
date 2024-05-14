#include <stdio.h>

int main()
{

    // Keep taking numbers as input from user until user enters an odd number
    int n;

    do
    {
        printf("Enter number:");
        scanf("%d", &n);
        printf("%d \n", n);

        if (n % 2 != 0)
        {
            break;
        }
    } while (1);

    printf("END!!!");

    return 0;
}