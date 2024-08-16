#include <stdio.h>

int main()
{
    int x;
    printf("Enter the value of x = ");
    scanf("%d" ,&x);

    int y;
    printf("Enter the value of y = ");
    scanf("%d" ,&y);

    int a = (x*x) + (y*y) - (2*x*y);
    printf("The ans is = %d" ,a);
     
    return 0;
}