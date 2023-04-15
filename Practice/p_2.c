//Write a program that replaces a substring with another string in a given line of text.

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100], b[100];
    printf("Enter initial text: ");
    fgets(a, 100, stdin);
    printf("Enter text to be replaced: ");
    fgets(b, 100, stdin);
    int n;
    printf("Enter position from where string is to be replaced: ");
    scanf("%d", &n);
    for (int i = 0; i<n; i++)
    {
        if (a[i] == a[n])
        break;
        else
        printf("%c", a[i]);
    }
    for (int j = 0; j < strlen(b); j++)
    {
        printf("%c", b[j]);
    }        

    return 0;
}