#include <stdio.h>

int main()
{
    const float a=3.14;
    float b;
    printf("enter the value of radius =");
    
    scanf("%f", &b);
    float area=(float)(a*b*b);     
    printf("the area of circle is %f" ,area);
}  