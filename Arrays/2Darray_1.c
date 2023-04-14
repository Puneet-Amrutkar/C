// Write a program to enter two 3 x 3 matrices and find their
//    a. sum
//    b. Multiplication

#include<stdio.h>

int main()
{

    //taking elements of first array
    int arr_1[3][3], arr_2[3][3];
    printf("Input elements of the first array \n");
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d", &arr_1[i][j]);
        }
    }
    printf("The matrix is : \n");
    for (int i = 0; i<3; i++)
    {
        printf("\n");
        for (int j = 0; j<3; j++)
        {
            printf("%d \t",arr_1[i][j]);
        }
    }
    printf("\n \n");

    //taking elements of second array 
    printf("Input elements of the second array \n");
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d", &arr_2[i][j]);
        }
    }
    printf("The matrix is : \n");
    for (int i = 0; i<3; i++)
    {
        printf("\n");
        for (int j = 0; j<3; j++)
        {
            printf("%d \t", arr_2[i][j]);
        }
    }
    printf("\n \n");

    //sum of the two arrays
    int x, y, sum[3][3];
    for (x = 0; x<3; x++)
    {
        for (y = 0; y<3; y++)
        {
            for (int k = 0; k<3; k++)
            {
                sum[x][y] = arr_1[x][k] + arr_2[k][y];
            }
        }
    }
    printf("The sum of the two arrays is : \n\n");
    for (x = 0; x<3; x++)
    {
        for (y = 0; y<3; y++)
        {
            printf("%d",&sum[x][y]);
            if (y == 2)
            {
                printf("\n \n");
            } 
        }
    }

    //product of two arrays
    int n, m, prod[3][3];
    for (n = 0; n<3; n++)
    {
        for (m = 0; m<3; m++)
        {
            for (int z = 0; z<3; z++)
            {
                prod[n][m] += arr_1[n][z] * arr_2[z][m];
            }
        }
    }
    printf("The product of the two arrays is : \n\n");
    for (n = 0; n<3; n++)
    {
        for (m = 0; m<3; m++)
        {
            printf("%d \t", prod[n][m]);
            if (m == 2)
            {
                printf("\n \n \t");
            } 
        }
    }

    return 0;     
}