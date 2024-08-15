#include <stdio.h>

int main()
{
    const float pie=3.14;

    int r;
    printf("Enter the value of raduis = ");
    scanf("%d",&r);

    float circle= 2 * pie * r;
    printf("Perimeter of a circle is = %f" ,circle);
}