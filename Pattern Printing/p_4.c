// * * * *
// * * *
// * *
// *

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n+1-i; j++)       //logic: i+j = n+1
        {
            printf("*  ");
        }
        printf("\n");
    }

    //OR method
    int a = n;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=a; j++)
        {
            printf("*");
        }
        a--;
        printf("\n");
    }

    return 0;
}