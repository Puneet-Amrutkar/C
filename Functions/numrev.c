// write a program using while loop to reverse the digits of the number. For example number 12345 should be written as 54321.

#include<stdio.h>

void reverse(long n);

int main()
{
    reverse(123456);
    return 0;
}

void reverse(long x)
{
    int t = 0;
    while (x>0)
    {
        int d = x%10;
        t = t*10 + d;
        x = x/10;
    }
    printf("The reversed number is: %d", t);
}