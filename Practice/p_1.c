//Write a program that counts the number of vowels, consonants and digits in a given line of text.

#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int vowels(char arr[]);
int consonents(char arr[]);
int digits(char arr[]);

int main()
{
    char text[100];
    printf("Enter a text line");
    fgets(text, 100, stdin);
    printf("No. of vowels: %d", vowels(text));
    printf("No. of consonents: %d", consonents(text));
    printf("No. of digits: %d", digits(text));
    return 0;
}

int vowels(char arr[])
{
    int a = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        char ch = strlwr(arr[i]);
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        a++;
    }
    return a;
}

int consonents(char arr[])
{
    int b = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        char ch = strlwr(arr[i]);
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == ' ' || arr[i] == '0' || arr[i] == '1' || arr[i] == '2' || arr[i] == '3' || arr[i] == '4' || arr[i] == '5' || arr[i] == '6' || arr[i] == '7' || arr[i] == '8' || arr[i] == '9')
        b++;
    }
    int x = strlen(arr);
    return (x - b);
}

int digits(char arr[])
{
    int c = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == '0' || arr[i] == '1' || arr[i] == '2' || arr[i] == '3' || arr[i] == '4' || arr[i] == '5' || arr[i] == '6' || arr[i] == '7' || arr[i] == '8' || arr[i] == '9')
        c++;
    }
    return c;
}