#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter a = ");
    scanf("%d" ,&a);

    printf("Enter b = ");
    scanf("%d" ,&b);

    printf("Enter c = ");
    scanf("%d" ,&c);

    printf("Enter d = ");
    scanf("%d" ,&d);

    if (a < b)
    {
        if (a < c)
        {
            if (a < d)
            {
                printf("a is minimum = %d" ,a);
            }
            else
            {
                printf("d is minimum = %d" ,d);
            }
        }
        else
        {
            if (c < d)
            {
                printf("c is minimum = %d" ,c);
            }
            else
            {
                printf("d is minimum = %d" ,d);
            }
            
        }
        
    }
    else
    {
        if (b < a)
        {
            if (b < c)
            {
                if (b < d)
                
                {
                    printf("b is minimum = %d" ,b);
                }
                else
                {
                    printf("d is minimum = %d" ,d);
                }
                
            }    
            else
            {
                if (c < d)
                {
                    printf("c is minimum");
                }
                else
                {
                    printf("d is minimum = %d" ,d);
                }
                
            }
        }
        
    }
}