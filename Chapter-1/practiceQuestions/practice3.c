#include <stdio.h>

// calculate area of circle = radius is given
int main()
{

    float radius;
    float pi = 3.14;
    printf("Enter radius:");
    scanf("%f", &radius);
    float areaOfCircle = pi * radius * radius;
    printf("Area of circle is: %f", areaOfCircle);

    return 0;
}