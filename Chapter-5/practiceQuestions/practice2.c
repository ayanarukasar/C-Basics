#include <stdio.h>

//user defined functions
void printIndian();
void printFrench();
void printHumanity();

int main()
{
    // write a func - that prints Namaste if user is indian & Bonjour if the user is french
    char user;
    printf("Enter user:");
    scanf("%c", &user);
    printf("%c \n", user);

    if (user == 'i')
    {
        printIndian();
    }
    else if (user == 'f')
    {
        printFrench();
    }
    else
        printHumanity();

    return 0;
}

void printIndian()
{
    printf("Namaste \n");
}

void printFrench()
{
    printf("Bonjour :)  \n");
}

//Func is calling another functions
void printHumanity(){
    printIndian();
    printFrench();
}
