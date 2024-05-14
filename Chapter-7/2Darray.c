#include <stdio.h>

int main()
{
    // 2 X 3
    int marks[2][3]; // _ _ _ || _ _ _
    marks[0][0] = 89;
    marks[0][1] = 79;
    marks[0][2] = 99;

    marks[1][0] = 87;
    marks[1][0] = 93;
    marks[1][0] = 97;

    printf("%d", marks[0][0]);

    return 0;
}