// Area of cicrle

#include<stdio.h>

int main()
{
    float r, area, pi=3.141;
    printf("Enter the radious: ");
    scanf("%f",&r);

    area = pi * r * r;
    printf("Area of circle is: %f", area);

    return 0;

}