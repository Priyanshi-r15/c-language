#include <stdio.h>

int main()
{
    int p,q,r;

    printf("Enter p = ");
    scanf("%d" ,&p);

    printf("Enter q = ");
    scanf("%d" ,&q);

    printf("Enter r = ");
    scanf("%d" ,&r);

    if (p < q)
    {
        if (p < r)
        {
            printf("p is minimum = %d" ,p);
        }
        else
        {
            printf("r is minimum = %d" ,r);
        }
    }
    else
    {
        if (q < p)
        {
            if (q < r)
            {
                printf("q is minimum = %d" ,q);
            }
            else
            {
                printf("r is minimum = %d" ,r);
            }
        }
        
    }
    

}