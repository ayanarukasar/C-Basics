#include <stdio.h>
#include <string.h>

typedef struct Address
{
    int houseNo;
    char block;
    char city[50];
    char state[50];
} add;

void printAdd(struct Address add);

int main()
{
    struct Address add[5];

    printf("enter info for person 1");
    scanf("%d", &add[0].houseNo);
    scanf("%s", &add[0].block);
    scanf("%s", &add[0].city);
    scanf("%s", &add[0].state);

    printf("enter info for person 2");
    scanf("%d", &add[1].houseNo);
    scanf("%s", &add[1].block);
    scanf("%s", &add[1].city);
    scanf("%s", &add[1].state);

    printf("enter info for person 3");
    scanf("%d", &add[2].houseNo);
    scanf("%s", &add[2].block);
    scanf("%s", &add[2].city);
    scanf("%s", &add[2].state);

    printf("enter info for person 4");
    scanf("%d", &add[4].houseNo);
    scanf("%s", &add[4].block);
    scanf("%s", &add[4].city);
    scanf("%s", &add[4].state);

    printf("enter info for person 5");
    scanf("%d", &add[5].houseNo);
    scanf("%s", &add[5].block);
    scanf("%s", &add[5].city);
    scanf("%s", &add[5].state);

    printAdd(add[0]);
    printAdd(add[1]);
    printAdd(add[2]);
    printAdd(add[3]);
    printAdd(add[4]);

    return 0;
}

void printAdd(struct Address add)
{
    printf("address is: %d \t, %s \t, %s \t, %s \t \n", add.houseNo, add.block, add.city, add.state);
}
