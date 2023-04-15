#include<stdio.h>

int main()
{
    char text[100];
    printf("Enter a text line: ");
    fgets(text, 100, stdin);
    puts(text);

    //string as pointer
    char *ptr = "Hello World";
    puts(ptr);

    return 0; 
}