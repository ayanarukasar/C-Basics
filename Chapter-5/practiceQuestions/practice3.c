#include <stdio.h>

int printTable(int n);

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    printTable(n); // argument or actual parameter

    return 0;
}

int printTable(int n)
{ // parameter or formal parameter -- batane batane ke lie just
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", n * i);
    }
}
