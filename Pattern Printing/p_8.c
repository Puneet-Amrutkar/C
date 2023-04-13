// 1 
// 1 3 
// 1 3 5 
// 1 3 5 7

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {
        int a = 1;    //the position of this has to be inside so as to reset the value of a     before the next iteration of the inner loop.

        for(int j = 1; j<=i; j++)
        {
            printf("%d ", a);
            a = a + 2;
        }        
        printf("\n");
    }

    return 0;
}