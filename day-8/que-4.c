#include <stdio.h>

int main()
{
    int i, n, fact=1;

    printf("Enter any Number = ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        fact = i*fact;
    }
    printf("Factorial no. %d is = %d",n,fact);
    
}