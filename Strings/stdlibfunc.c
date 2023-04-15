#include<stdio.h>
#include<string.h>

int name()
{
    char n[] = "PUNEET";
    char m[] = "AMRUTKAR";
    int length = strlen(n);
    printf("%d", length);
    //strcpy(n, m);
    strcat(n, m);
    printf("%s", n);
    strcmp(n, m);

    return 0;
}