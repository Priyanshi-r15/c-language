#include <stdio.h>

int main()
{
    int u, v, w, x ,y;

    printf("Enter u = ");
    scanf("%d" ,&u);

    printf("Enter v = ");
    scanf("%d" ,&v);

    printf("Enter w = ");
    scanf("%d" ,&w);

    printf("Enter x = ");
    scanf("%d" ,&x);

    printf("Enter y = ");
    scanf("%d" ,&y);

    if (u < w)
    {
        if (u < v)
        {
            if (u < x)
            {
                if (u < y)
                {
                    printf("u is minimum = %d" ,u);
                }
                else
                {
                    printf("y is minimum = %d" ,y);
                }
            }
            else
            {
                if (x < y)
                {
                    printf("x is minimum = %d" ,x);
                }
                else
                {
                    printf("y is minimum = %d" ,y);
                }
            }
            
        }
        else
        {
            if (v < x)
            {
                printf("v is minimum = %d" ,v);
            }
            else
            {
                printf("x is minimum = %d" ,x);
            }
            
        }
        
    }
    else{
        if (w < u)
        {
            if (w < v)
            {
                if (w < x)
                {
                    if (w < y)
                    {
                        printf("w is minimum = %d" ,w);
                    }
                    else
                    {
                        printf("y is minimum = %d" ,y);
                    }
                    
                }
                else
                {
                    if (x < y)
                    {
                        printf("x is minimum = %d" ,x);
                    }
                    else
                    {
                        printf("y is minimum = %d" ,y);
                    }
                    
                }
                
            }
            else
            {
                if (v < x);
                {
                    printf("v is minimum = %d" ,v);
                }
                
            }

        }
        else
        {
            if (u < v)
            {
                printf("u is minimum = %d" ,u);
            }
            else
            {
                printf("v is minimum = %d" ,v);
            }
            
        }
        
    }
    
}