//       *
//     * *
//   * * *
// * * * *

#include<stdio.h>

int main()
{
    int n, m;
    printf("Enter the number of rows");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            if (j < n-1)
            {
                printf("%d", " ");  
            }
            else
            {
                printf("%d", " * ");
            }
        }
        printf("\n");
    }

    return 0;
}