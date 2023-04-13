//write a program to find the square of a number using library variables.

#include<stdio.h>
#include<math.h>    //library function inclusion

int main()
{
    int n;
    printf("Input a number");
    scanf("%d", &n);
    printf("%f", pow(n, 2));    //library function: pow(n, 2)
}