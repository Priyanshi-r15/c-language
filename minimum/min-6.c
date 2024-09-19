#include <stdio.h>

int main()
{
    int p, q, r, s, t, u;

    printf("Enter p = ");
    scanf("%d" ,&p);

    printf("Enter q = ");
    scanf("%d" ,&q);

    printf("Enter r = ");
    scanf("%d" ,&r);

    printf("Enter s = ");
    scanf("%d" ,&s);

    printf("Enter t = ");
    scanf("%d" ,&t);
    
    printf("Enter u = ");
    scanf("%d" ,&u);

    if (p < q)
    {
        if (p < r)
        {
            if (p < s)
            {
                if (p < t)
                {
                    if (p < u)
                    {
                        printf("p is min ");
                    }
                    else{
                        printf(" u is min ");
                    }
                    
                }
                else{
                    if (t < u)
                    {
                        printf("t is min ");
                    }
                    else{
                        printf("u is min ");
                    }
                    
                }
            }
            else
            {
                if (s < t)
                {
                    if (s < u)
                    {
                        printf("s is min");
                    }
                    else{
                        printf("u is min");
                    }
                }
                else{
                    printf("t is min ");
                }
                
            }
            
        }
        else{
            if (r < s)
            {
                if (r < t)
                {
                    if (r < u)
                    {
                        printf("r is min ");
                    }
                    else
                    {
                        printf("u is min ");
                    }
                }
                else
                {
                    if (t < u)
                    {
                        printf("t is min ");
                    }
                    else
                    {
                        printf("u is min ");
                    }
                }
            }
            else
            {
                if (s < t)
                {
                    if (s < u)
                    {
                         printf("s is min ");
                    }
                    else
                    {
                        printf("u is min");
                    }
                }
                else
                {
                    if (t < u)
                    {
                        printf("t is min");
                    }
                    else
                    {
                        printf("u is min");
                    }
                }    
            }
            
        }
    }
     else{
        if (q < p)
        {
            if (q < r)
            {
                if (q < s)
                {
                    if (q < t)
                    {
                        if (q < u)
                        {
                            printf("q is min");
                        }
                        else{
                            printf("u is min");
                        }
                    }
                    else{
                        if (t < u)
                        {
                            printf("t is min");
                        }
                        else{
                            printf("u is min");
                        }
                    }
                    
                }
                else{
                    if (s < t)
                    {
                        if (s < u)
                        {
                            printf("s is min");
                        }
                        else
                        {
                            printf("u is min");
                        }
                    }
                    else{
                        if (t < u)
                        {
                            printf("t is min");
                        }
                        else{
                            printf("u is min");
                        }
                    }
                    }
                    
                }
                else{
                    if (r < s)
                    {
                       if (r < t)
                       {
                            if (r < u)
                            {
                                 printf("r is min");
                            }
                            else
                            {
                                 printf("u is min");
                            }
                       }
                       else
                       {
                            if (t < u)
                            {
                                 printf("t is min");
                            }
                            else
                            {
                                 printf("u is min");
                            }
                       }
                       
                    }
                    else{
                        if (s < t)
                        {
                            if (s < u)
                            {
                                 printf("s is min");
                            }
                            else
                            {
                                 printf("u is min");
                            }
                        }
                        else
                        {
                            if (t < u)
                            {
                                 printf("t is min");
                            }
                            else
                            {
                                 printf("u is min");
                            }
                        }
                    }
                    
                }
            }
            else{
                if (r < s)
                {
                   if (r < t)
                   {
                        if (r < u)
                        {
                             printf("r is min");
                        }
                        else
                        {
                             printf("u is min");
                        }
                   }
                   else
                   {
                        if (t < u)
                        {
                             printf("t is min");
                        }
                        else
                        {
                             printf("u is min");
                        }
                   }
                }
                else
                {
                    if (s < t)
                    {
                        if (s < u)
                        {
                             printf("s is min");
                        }
                        else
                        {
                             printf("u is min");
                        }
                    }
                    else
                    {
                        if (t < u)
                        {
                             printf("t is min");
                        }
                        else
                        {
                             printf("u is min");
                        }
                    }
                }
                
            }
        }
    }
