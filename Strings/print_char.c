//write a program to input first name and last name of a person and print the characters of the string using loop.

#include<stdio.h>

void printChars(char arr[]);
int letterCounter(char arr[]);

int main()
{
    char fn[] = "PUNEET";
    char ln[] = "AMRUTKAR";

    printChars(fn);
    printChars(ln);
    printf("The length is %d", letterCounter(fn));

    return 0;
}

void printChars(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c  ", arr[i]);
    }
}

int letterCounter(char arr[])
{
    int k = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        k++;
    }

    return k-1;
}