#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        //we hate 3 number we dont want 3 to print
        //skip
        if (i == 3)
        {
            continue;
        }

        printf("%d\n", i);
    }

    printf("END!!!");
}