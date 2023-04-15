// Write a program using pointers to read an array of integers and print its elements in
// reverse order

#include<stdio.h> 

int main()
{
    int n;
    printf("Enter the number of elements of the array");
    scanf("%d", &n);
    int a[100];
    printf("Enter %d integers: \n", n);
    for (int i = 0; i<n; i++)
    {
        scanf("%d \t", &a[i]);
    }

    int *ptr;
    ptr = &a[n-1];
    printf("\n Elements of array in reverse order: \n");
    for (int j = 0; j<n; j++)
    {
        printf("%d \t", *ptr);
        *ptr--;
    }

    return 0;
}