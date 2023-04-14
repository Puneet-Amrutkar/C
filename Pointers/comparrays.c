// Write a function(using pointer parameters) that compares two integer arrays to see
// whether they are identical. The function returns 1 if they are identical else 0

#include <stdio.h>

int compareArrays(int* arr1, int* arr2, int size);

int main() {
    int arr1[100], arr2[100], size, i;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    printf("Enter the elements of the first array:\n");
    for (i = 0; i<size; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array:\n");
    for (i = 0; i<size; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    if (compareArrays(arr1, arr2, size)) 
    {
        printf("The arrays are identical.\n");
    } 
    else 
    {
        printf("The arrays are not identical.\n");
    }

    return 0;
}

int compareArrays(int *arr1, int *arr2, int size) 
{
    for (int i = 0; i<size; i++) 
    {
        if (*(arr1 + i) != *(arr2 + i)) 
        {
            return 0;
        }
    }
    return 1;
}