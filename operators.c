//operator precedence: ! > (*,/,%) > (+,-) > (<, >, <=, >=) > (==, !=) > && > ||

#include<stdio.h>
#include<math.h>

int main()
{
    //type declaration rules
    int x = 22;
    int y = x;
    int z = 33;
    int f = 55, g;
    int sum_type_dec = y + z + f;
    printf("%/d", sum_type_dec);

    //arithmetic operators: precedence: *,%,/ > +,- > =
    int a = 1, b = 3, c = 4;
    int sum = a + b;
    int prod = a * b;
    int diff = b - a;
    int rem = b % a;    //modular operator
    int quot = b / a;
    int power = pow(b,c);
    printf("%d \n", sum);

    //type conversion: when a int and float is operated tpogether then the type of the product is converted to the bigger space;
    int h = 4;
    float j = 6.34;
    printf("%f \n", h * j); 
    int i = (int)1.9999;    //forced type conversion
    printf("%d \n", i);
    
    //relational operators: >, <, ==, !=
    printf("%d \n", 3==5);

    //logical operators: &&, !, ||
    printf("%d \n", 4>5 && 6<5);

    //assignment operators: =, +=, -=, /=, *=
    
    return 0; 
}  