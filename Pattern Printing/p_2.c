// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include<stdio.h>

int main()
{
    int m, n;
    printf("Enter the number of rows");
    scanf("%d", &n);
    for(int i = 1; i<=m; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}