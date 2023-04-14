#include<stdio.h>

int table(int n);

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    table(n);

    return 0;
}

int table(int number)     //params for the function call and function def or prot may not be same.
{
    for (int i = 1; i<=10; i++)
    {
        printf("%d \n", (i*number));
    }
}