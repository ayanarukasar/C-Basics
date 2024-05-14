#include <stdio.h>

// area of square =side*side
int main()
{

    float side;
    printf("Enter side:");
    scanf("%f", &side);
    float area = side * side;
    printf("area of square is: %f", area);

    return 0;
}