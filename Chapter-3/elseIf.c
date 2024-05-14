#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Toppers: Passed with Honor \n");
    }
    else if (marks >= 60)
    {
        printf("First Division \n");
    }
    else if (marks >= 40)
    {
        printf("Second Division \n");
    }
    else
    {
        printf("BEST OF LUCK!!!!!!\n ");
    }

    printf("THANK YOU :)");

    return 0;
}