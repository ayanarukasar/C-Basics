#include <stdio.h>

// write a program to check if its sunday & its snowing ==true
// write a program to check if its monday or its raining ==true
// write a program to check if a number is greater than 9 and less than 100 ==true
int main()
{
    int isSunday = 1; //which means true
    int isSnowing = 1;

    int isMonday = 0;
    int isRaining = 1;

    int num;

    // printf("The output is: %d", isSunday && isSnowing);
    // printf("The output is: %d", isMonday || isRaining);

    printf("Enter number:");
    scanf("%d", &num);
    printf("The number is %d", num > 9 && num <100);

    return 0;
}