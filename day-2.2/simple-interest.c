#include <stdio.h>

int main()
{
    float p;
    printf("Enter the value of Principle = ");
    scanf("%f" ,&p);

    float r;
    printf("Enter the rate = ");
    scanf("%f" ,&r);

    float n;
    printf("Enter the time period = ");
    scanf("%f" ,&n);

    float interest=(p*r*n)/100;
    printf("simple interest = %f" ,interest);

    return 0;
}