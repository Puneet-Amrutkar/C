//     1
//   1 2 1
// 1 2 3 2 1
//   1 2 1
//     1

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d", &n);
    for (int i = 1; i<n; i++)
    {
        for (int j = 1; j<i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j<=i; j++)
        { 
            printf("%d",j);
        }
        for (int j = i-1; j>=1; j--)
        {
            printf("%d",j);
        }

        printf("\n");
    }

    for (int i = 1; i<=n/2; i++)
    {
        for (int j = 1; j<=n/2+i-2; j++)
        { 
            printf(" ");
        }
        for (int j = 1; j<=n/2+1-i; j++)
        { 
            printf("%d", j);
        }
        for (int j = n/2-i; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }           
    
    return 0;
}