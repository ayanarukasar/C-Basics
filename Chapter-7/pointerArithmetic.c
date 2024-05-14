#include <stdio.h>

int main()
{
    int age = 25;
    // int *ptr = &age;

    /*
    printf("ptr before inc %u\n", ptr); //6422296 datatype size increment will happen
    ptr++;
    printf("ptr after inc %u\n", ptr); //6422300

    ptr--;
    printf("ptr after dec %u\n", ptr); //6422296
    */

    // floating

    float price = 20.00;
    /*
    float *ptr = &price;

    printf("ptr before inc %u\n", ptr); //6422292 datatype size increment will happen
    ptr++;
    printf("ptr after inc %u\n", ptr); //6422296

    ptr--;
    printf("ptr after dec %u\n", ptr); //6422292

    */

    // char

    char hashtag = '#';
    char *ptr = &hashtag;

    printf("ptr before inc %u\n", ptr); // 6422291 datatype size increment will happen
    ptr++;
    printf("ptr after inc %u\n", ptr); // 6422292

    ptr--;
    printf("ptr after dec %u\n", ptr); // 6422291

    return 0;
}