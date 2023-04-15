// Write a program that takes as input a line of text and counts the frequency of each digit and letter in the input. The program will treat an uppercase letter and its lowercase equivalent as the same letter.

#include<stdio.h>
#include<string.h>

int main()
{
    int k = 0;
    char a[100];
    char ch;
    printf("Enter a text line: ");
    fgets(a, 100, stdin);
    printf("Enter character to check its frequency: ");
    scanf("%c", &ch);
    for (int i = 0; i<strlen(a) ; i++)
    {
        strlwr(a);
        if(ch == a[i])
        k++;
    }
    printf("The frequency of %c is %d", ch, k);

    return 0;
}