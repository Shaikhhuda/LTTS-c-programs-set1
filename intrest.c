// calculating simple intrest

#include<stdio.h>

int main()
{
    float si, p, n, r;
    printf("Enter the value of p n and r");
    scanf("%f%f%f", &p,&n,&r);

    si = (p * n * r)/100;
    printf("Simple intrest is: %f", si);

    return 0;
}