#include<stdio.h>

float gst(float value);

int main()
{
    float value;
    printf("Enter amount");
    scanf("%f", &value);
    gst(value);

    // float price = gst(value);
    // printf("The final price is: %f \n", price);

    return 0;
}

float gst(float value)
{
    value = value + (0.18*value);
    // return value;
    printf("The final price is: %f \n", value);
}
