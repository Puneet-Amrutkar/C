#include<stdio.h>

int main()
{
    //if-else statements
    int a;
    printf("Enter your age");
    scanf("%d", &a);
    if(a>18)
    {
        printf("Adult \n");
        printf("Can drive \n");
    }
    else
    {
        printf("Not Adult \n");
    }

    //ternary operator
    int b;
    printf("Enter your age");
    scanf("%d", &b);
    b<18 ? printf("Not an Adult \n") : printf("Adult \n");

    //switch statements
    int day;
    printf("Enter a number from 1-7");
    scanf("%d", &day);
    switch(day)
    {
        case 1: printf("Monday");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("Wednesday");
        break;
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("Saturday");
        break;
        case 7: printf("Sunday");
        break;
        Default: printf("Not a valid day");
    }
    
    return 0;
}