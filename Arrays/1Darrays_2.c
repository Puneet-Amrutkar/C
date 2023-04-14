// Given the two one dimensional arrays A and B of size 10 which are sorted in ascending
// order. Write a C program to merge them into single sorted array C that contains every
// item from arrays A and B in ascending order

#include<stdio.h>

int main()
{
    int a[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int b[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int c[20];

    //merging the two arrays 
    for (int i = 0; i<10; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i<10; i++)
    {
        c[i+10] = b[i];
    }
    
    printf("The merged array before sorting: \n");
    for (int i = 0; i<20; i++)
    {
        printf("%d \t", c[i]);
    }

    //Bubble sort the merged array in ascending order
    for (int i = 0; i<20; i++)
    {
        int t;
        for (int j = i+1; j<20; j++)
        {
            if (c[j] > c[j+1])
            {
                t = c[j];
                c[j] = c[j+1];
                c[j+1] = t;
            }
        }
    }

    printf("The sorted array is: \n");
    for (int i =0; i<20; i++)
    {
        printf("%d \t", c[i]);
    }

    return 0;
}