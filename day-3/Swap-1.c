#include <stdio.h>

int main()
{
    int p,q,r;

    printf("Enter the Value of Q = ");
    scanf("%d" ,&q);

    printf("Enter the value of R = ");
    scanf("%d" ,&r);

    p = q;
    q = r;
    r = p;

    printf("The value of Q = %d \n" ,q);
    printf("The value of R = %d" ,r);

    return 0;
}