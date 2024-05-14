#include <stdio.h>

int main()
{

    //print from 5 to 50 odd numbers

    for (int i = 5; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            continue;;
        }

        printf("%d\n", i);
    }

    printf("END!!!");
}
