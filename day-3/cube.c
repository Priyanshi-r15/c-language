#include <stdio.h>

int main()
{
    int x;
    printf("Enter the vaue of x = ");
    scanf("%d" ,&x);

    int y;
    printf("Enter the value of y = ");
    scanf("%d" ,&y);

    int cube= (x*x*x) + (y*y*y) +(3*x*x*y) + (3*x*y*y);
    printf("The Ans is = %d" ,cube);

    return 0;
}