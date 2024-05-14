#include <stdio.h>

int main()
{
    int num;
    printf("Enter number");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("positive \n");
        if (num % 2 == 0)
        {
            printf("Even");
        }
        else
        {
            printf("Odd");
        }
        
        
    }
    else
    {
        printf("negative \n");
    }
    
    

   

    return 0;
}