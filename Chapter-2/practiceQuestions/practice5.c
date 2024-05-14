#include <stdio.h>

// write a program to check if the no. is divisible by 2 or not
int main()
{
   int x;
   int y;
   int z;
   printf("Enter number 1:");
   scanf("%d", &x);
   printf("Enter number 2:");
   scanf("%d", &y);
   printf("Enter number 3:");
   scanf("%d", &z);

   int resultant = (x + y + z) / 3;

    printf("The average of three number are: %d", resultant);


    return 0;
}