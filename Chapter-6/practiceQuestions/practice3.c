#include<stdio.h>

int doWork(int *a, int *b);

int main(){

    int x = 3;
    int y = 5;

    doWork(&x, &y);

    printf("Sum is %d \n", x + y);
    printf("Product is %d \n", x * y);
    int avg = (x + y) / 2;

    printf("Average is %d \n", avg);


    return 0;
}

int doWork(int *a, int *b){

    printf("Sum is %d \n", *a + *b);
    printf("Product is %d \n", (*a) * (*b));
    int avg = ((*a) + (*b)) / 2;

    printf("Average is %d \n", avg);


}
