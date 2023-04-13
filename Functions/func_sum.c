#include<stdio.h>

int sum(int a, int b);

int main()
{
    int a, b;
    printf("Enter two numbers");
    scanf("%d", &a);
    scanf("%d", &b);
    int s = sum(a, b);
    printf("The sum is: %d ", s);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}