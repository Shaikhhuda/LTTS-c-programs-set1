// Temprature conversion celsius to fahrenheit

#include<stdio.h>

int main()
{
    float tf,tc;

    printf("Enter temprature in celsius: ");
    scanf("%f", &tc);

    tf = tc * 1.8 + 32;

    printf("Temprature in fahrenheit: %f", tf);

    // fahrenheit to celsius

     float f,c;

    printf("\n Enter temprature in fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 1.8;

    printf("Temprature in celsius: %f", c);

    return 0;
}