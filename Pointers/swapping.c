//write a program to swap two numbers a and b

#include<stdio.h>

void _swap(int *a, int *b);

int main()
{
    int x = 3, y = 5;
    _swap(&x, &y);
    printf("The swapped numbers are: %d %d \n", x, y);
    return 0;
}

void _swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}