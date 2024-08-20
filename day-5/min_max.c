#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter the value of a = ");
    scanf("%d" ,&a);

    printf("Enter the value of b = ");
    scanf("%d" ,&b);

    if (a < b)
    {
        printf("a is minimum = %d" ,a);
    }
    else if (a == b)
    {
       printf("a is equal to b");
    }
    else
    {
        printf("b is minimum = %d" ,b);
    }
    
}