#include <stdio.h>

int main()
{

    // Keep taking numbers as input from user until user enters a number which is  multiple of 7

    int num;

    do
    {
        printf("Enter number:");
        scanf("%d", &num);
        printf("%d \n", num);

        if (num % 7 == 0)
        {
            break;
        }

    } while (1);

    printf("END!!!!");

    return 0;
}