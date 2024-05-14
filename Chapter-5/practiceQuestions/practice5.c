#include <stdio.h>

float printAreaofSquare(float side);
float printAreaofCircle(float radius);
float printAreaofRectangle(float length, float width);

int main()
{
    float s = 4.0;
    float r = 2.0;
    float l = 15.0;
    float w = 4.0;

    printf("area is %f\n", printAreaofCircle(r));
    printf("area is %f\n", printAreaofSquare(s));
    printf("area is %f\n", printAreaofRectangle(l, w));

    return 0;
}

float printAreaofSquare(float side)
{
    return side * side;
}

float printAreaofCircle(float radius)
{
    return 3.14 * radius * radius;
}

float printAreaofRectangle(float length, float width)
{

    return length * width;
}