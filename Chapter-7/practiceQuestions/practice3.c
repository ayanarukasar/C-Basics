#include <stdio.h>

int main()
{
    int adhaar[5];

    // taking input
    int *ptr = &adhaar[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d index : ", i);
        scanf("%d", &adhaar[i]);
    }

    // output

    for (int i = 0; i < 5; i++)
    {
        printf("%d index = %d : ", i, adhaar[i]);
    }

    return 0;
}