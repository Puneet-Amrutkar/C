// 1 2 3 4
// 1 2 3 
// 1 2 
// 1 

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i<=n; i++)
    {
        for(int j =1; j<=a; j++)
        {
            printf("%d ", j);
        }
        a--;
        printf("\n");
    }
    return 0;
}