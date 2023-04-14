#include<stdio.h>

int main()
{
    int arr[3];
    printf("Enter marks in 1st subject");
    scanf("%d ", &arr[0]);
    printf("Enter marks in 2nd subject");
    scanf("%d ", &arr[1]);
    printf("Enter marks in 3rd subject");
    scanf("%d ", &arr[2]);

    printf("The marks are: %d %d %d", arr[0], arr[1], arr[2]);
    return 0;
}