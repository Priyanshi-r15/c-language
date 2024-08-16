#include <stdio.h>

int main()
{
    int x;
    printf("Enter the value of x = ");
    scanf("%d" ,&x);

    int y;
    printf("Enter the value of y = ");
    scanf("%d" ,&y);

    int a= x * x; 
    int b= 2*x*y;
    int c= y * y;

    int ans = a + b + c;

    printf("The ans is = %d" ,ans);

    return 0;
}
