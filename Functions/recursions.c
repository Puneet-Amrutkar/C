//write a program to print the sum of first n natural numbers and also find the factorial of 4 using recursive functions

#include<stdio.h>

int sum(int x);
int factorial(int y);

int main()
{
    printf("The sum is: %d \n", sum(10));
    printf("The factorial of 4 is: %d \n", factorial(4));
    return 0;
}

//recursive function
int sum(int x)
{
    if (x == 1)
    {
        return 1;
    }
    int sum_xm1 =  sum((x-1));
    int sum_x = sum_xm1 + x;
    return sum_x;
}

int factorial(int y)
{
    if (y == 1)
    {
        return 1;
    }
    int fac_ym1 = factorial((y-1));
    int fac_y = fac_ym1 * y;
    return fac_y;
}
