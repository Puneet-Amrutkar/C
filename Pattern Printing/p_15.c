// 1
// A B
// 2 3 4
// C D E F
// 5 6 7 8 9

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d", &n);
    int a = 1;
    char ch = 'A';
    for (int i = 1; i<=n; i++)
    {
        if (i%2 == 1)
        {
            for (int j = 1; j<=i; j++)
            {
                printf("%d ", a);
                a++;
            }        
            printf("\n");
        }
        else
        {
            for (int j = 1; j<=i; j++)
            {
                printf("%c ", ch);
                ch++;
            }        
            printf("\n");
        }
    }
    return 0;
}