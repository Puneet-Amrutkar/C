//write a program to print the fibonacci series: 0 1 1 2 3 5 8...

#include<stdio.h>

int fibonacci(int limit);

int main()
{
    int limit;
    printf("Enter the limit");
    scanf("%d", &limit);
    printf("%d \n", fibonacci(limit));

    //using for loop
    int i, n;

    // initialize first and second terms
    int t1 = 0, t2 = 1;

    // initialize the next term (3rd term)
    int nextTerm = t1 + t2;

    // get no. of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // print the first two terms t1 and t2
    printf("Fibonacci Series: %d \t %d \t ", t1, t2);

    // print 3rd to nth terms
    for (i = 3; i <= n; ++i) {
        printf("%d \t", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}

int fibonacci(int limit)
{
    if(limit == 0)
    {
        return 0;
    }
    if(limit == 1)
    {
        return 1;
    }
    int fib_nm1 = fibonacci((limit-1));
    int fib_nm2 = fibonacci((limit-2));
    int fib_n = fib_nm1 + fib_nm2;
    return fib_n;
}