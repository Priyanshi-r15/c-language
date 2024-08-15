#include <stdio.h>

int main()
{
    const float a=0.5;

    //input for base
    float b;
    printf("Enter the value of base = ");
    scanf("%f" ,&b);

    //input for height
    float h;
    printf("Enter the value of height = ");
    scanf("%f" ,&h);

    //final ans
    float area = a * b * h;
    printf("ans = %f" ,area);

    return 0;
}