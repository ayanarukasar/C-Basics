#include <stdio.h>

int main()
{
    float item[3]; // defined array length to 3

    printf("enter price 1:");
    scanf("%f", &item[0]);

    printf("enter price 2:");
    scanf("%f", &item[1]);

    printf("enter price 3:");
    scanf("%f", &item[2]);

    printf("totalPrice 1: %f \n", item[0] + (0.18 * item[0]));
    printf("totalPrice 2: %f \n", item[1] + (0.18 * item[1]));
    printf("totalPrice 3: %f \n", item[2] + (0.18 * item[2]));

    return 0;
}