#include <stdio.h>

void printHW(int count);

int main()
{
    printHW(5);

    return 0;
}

// recursive func
void printHW(int count)
{
    if (count == 0)
    {
        return; // because void ka koi return type nhi hota
    }

    printf("Hello World!\n");
    printHW(count - 1);
}
