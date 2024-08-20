#include <stdio.h>

int main()
{
    int x;
    printf("enter the value of x = ");
    scanf("%d" ,&x);

    if (x > 0)
    {
        printf("x is positive");
    }
    else if (x == 0)
    {
        printf("x is neutral");
    }
    else
    {
        printf("x is negaitve");
    }
    
    
}