#include <stdio.h>

int main()
{
    // // Syntax
    // int marks[] = {97, 98, 89};

    // input and output:
    int marks[3]; // defined array length to 3

    printf("enter physics marks:");
    scanf("%d", &marks[0]);

    printf("enter chemistry marks:");
    scanf("%d", &marks[1]);

    printf("enter maths marks:");
    scanf("%d", &marks[2]);

    printf("phy = %d, chem = %d, maths = %d", marks[0], marks[1], marks[2]);

    return 0;
}