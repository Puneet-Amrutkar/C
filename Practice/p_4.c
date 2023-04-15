// Write a function substring that, given two strings s1 and s2, returns the starting position of the first occurrence of s1 in s2. If s1 is not in s2, return -1.

#include<stdio.h>
#include<string.h>

int substring(char *a, char *b);

int main()
{
    char a[] = "world";
    char b[] = "hello world";
    printf("%d \n", substring(a, b));

    return 0;
}

int substring(char *a, char *b)
{
    char *p = strstr(b, a);
    if (p)
    return p-b;
    else
    return -1;
}