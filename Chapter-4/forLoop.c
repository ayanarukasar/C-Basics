#include <stdio.h>

int main()
{

    // for (int i = 0; i <= 5; i++)
    // {
    //     printf("Hello world \n");
    // }

    // for (int i = 1; i <= 100; i++)
    // {
    //     printf("%d \n", i);
    // }

    // iterator: counter : i; which means kisi kam ko bar bar karana
    // for (int i = 10; i >= 1; i--)
    // {
    //     printf("%d \n", i);
    // }

    // //Print the number from 0 to 10
    // for (int i = 0; i <= 10; i++)
    // {
    //     printf("%d \n", i);
    // }

    /*
    increment operator
    i++ (post-increment) ++i (pre-increment)

    //First Use (means print first) then increase
    int i=1;
   printf("%d \n", i++);
   printf("%d \n", i);

   output: 1
           2

   // First increase then use
   int i=1;
   printf("%d \n", ++i);
   printf("%d \n", i);

   output: 2
           2

   Decrement Operator

   // first descrease then use
   int i=1;
   printf("%d \n", --i);
   printf("%d \n", i);

   Output: 0
           0

   //First use then decrease
   int i=1;
   printf("%d \n", i--);
   printf("%d \n", i);

   Output: 1
           0

    */
    int i = 1;
    printf("%d \n", i--);
    printf("%d \n", i);

    // counter var can be flating value and char value
    for (float i = 1.0; i <= 5.0; i++)
    {
        printf("%f \n", i);
    }

    // print a to z characters

    for (char i = 'a'; i <= 'z'; i++)
    {
        printf("%c \n", i);
    }

    // infinit Loop
    //    for (char ch = 'a'; ; i++)
    //    {
    //     printf("%c \n", ch);
    //    }

    //    for (int i = 1; ; i++)
    //    {
    //     printf("Aamir Waris\n");
    //    }

    return 0;
}