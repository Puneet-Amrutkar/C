#include<stdio.h>

int main()
{
    int age = 18;
    int *ptr = &age;      //* is value at address operator
    int _age = *ptr;
    printf("%d \n", _age);

    //printing address
    printf("%p \n", &age);      //& indicates address of age
    printf("%p \n", ptr);
    printf("%p \n", &ptr);
    printf("%u \n", &ptr);      //%u is unsigned int

    //printing value at address    
    printf("%d \n", *ptr);
    printf("%d \n", *(&age));

    //pointer to pointer
    int i = 5;
    int *ptr_2 = &i;
    int **pptr = &ptr_2;
    printf("%d \n", **pptr);
    printf("%p \n", **pptr);
    
    return 0;
}