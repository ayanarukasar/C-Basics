#include <stdio.h>

int main()
{

    // print sum of n natural numbers
    // n=4 given
    int n;
    int sum = 0;
    printf("Enter number:");
    scanf("%d", &n);

    // for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    // {
    //     sum = sum + i;
    //     printf("Reverse is %d \n", j);
    // }
    // printf("Sum is %d \n", sum);

    for (int j = n; j >= 1; j--)
    {
        sum = sum + j;
        printf("Reverse is %d \n", j);
    }
    printf("Sum is %d \n", sum);

    
    
    return 0;
}