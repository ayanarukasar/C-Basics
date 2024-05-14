#include <stdio.h>

int main()
{
    char day;
    printf("Enter day starting char:");
    scanf("%c", &day);

    switch (day)
    {
    case 'm':
        printf("Its Monday");
        break;
    case 't':
        printf("Its Tuesday");
        break;
    case 'w':
        printf("Its Wednesday");
        break;
    case 'T':
        printf("Its Thursday");
        break;
    case 'f':
        printf("Its Friday");
        break;
    case 's':
        printf("Its Saturday");
        break;

    default:
        printf("Its Holiday!!!YEAH");
        break;
    }

    return 0;
}