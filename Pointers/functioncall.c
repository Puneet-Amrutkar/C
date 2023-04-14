//pointers in function call == call by value and call by reference

#include<stdio.h>

void square(int x);
void _square(int *x);

int main()
{
    int x = 5;
    square(x);    //call by value: we pass value of variable as argument and copies are sent so that value cannot be changed
    printf("Number: %d \n", x);

    _square(&x);    //call by refr: we pass address of variable as argument and not a copy. hence the number also changes after function call.
    printf("Number: %d \n", x);
    return 0;
}

void square(int x)
{
    x = x * x;
    printf("Square: %d \n", x);
}

void _square(int *x)
{
    *x = (*x) * (*x);
    printf("Square %d \n", *x);
}