#include <stdio.h>

int main()
{
    int f, g, h, i, j, k, l;

    printf("enter f = ");
    scanf("%d" ,&f);

    printf("enter g = ");
    scanf("%d" ,&g);

    printf("enter h = ");
    scanf("%d" ,&h);

    printf("enter i = ");
    scanf("%d" ,&i);

    printf("enter j = ");
    scanf("%d" ,&j);

    printf("enter k = ");
    scanf("%d" ,&k);

    printf("enter l = ");
    scanf("%d" ,&l);

    if (f < g)
    {
        if (f < h)
        {
            if (f < i)
            {
                if (f < j)
                {
                    if (f < k)
                    {
                        if (f < l)
                        {
                            printf("f is min %d" ,f);
                        }
                        else
                        {
                            printf("l is min %d" ,l);
                        }
                    }
                    else
                    {
                        if (k < l)
                        {
                            printf("k is min %d" ,k);
                        }
                        else
                        {
                            printf("l s min %d" ,l);
                        }
                    }
                    
                }
                else
                {
                    if (j < k)
                    {
                            if (j < l)
                        {
                            printf("j is min %d" ,j);
                        }
                        else{
                            printf("l is min %d" ,l);
                        }
                    }                   
                    else
                    {
                       if (k < j)
                       {
                            if (k < l)
                            {
                                printf("k is min %d" ,k);
                            }
                            else
                            {
                                printf("l is min %d" ,l);
                            }
                       }
                        else{
                            printf("j is min %d" ,j);
                        }
                    }
                }
                
            }
            else
            {
                if (i < j)
                {
                   if (i < k)
                   {
                        if (i < l)
                        {
                            printf("i is min %d" ,i);
                        }
                        else
                        {
                            printf("l is min %d" ,l);
                        }
                        
                   }
                   else
                   {
                        if (k < l)
                       {
                          printf("k is min %d" ,k);
                       }
                        else{
                            printf("l is min %d" ,l);
                        }
                   }
                }
                else{
                    if (j < k)
                    {
                       if (j < l)
                       {
                             printf("j is min %d" ,j);
                       }
                       else
                       {
                            printf("l is min %d" ,l);
                       }
                    }
                    else
                    {
                        printf("k is min %d" ,k);
                    }
                }
                
            }
        }
        else
        {
            if (h < i)
            {
               if (h < j)
               {
                    if (h < k)
                    {
                        if (h < l)
                        {
                             printf("h is min %d" ,h);
                        }
                        else
                        {
                            printf("l is min %d" ,l);
                        }
                    }
                    else
                    {
                         if (k < l)
                       {
                          printf("k is min %d" ,k);
                       }
                        else{
                            printf("l is min %d" ,l);
                        }
                    }
               }
               else
               {
                      if (j < k)
                    {
                        if (j < l)
                        {
                            printf("j is min %d" ,j);
                        }
                        else
                        {
                            printf("l is min %d" ,l);
                        }
                    }
                    else
                    {
                        printf("k is min %d" ,k);
                    }
               }
            }
            else
            {

                  if (i < j)
                    {
                        if (i < k)
                        {
                            if (i < l)
                            {
                                printf("i is min %d" ,i);
                            }
                            else
                            {
                                printf("l is min %d" ,l);
                            }
                        }
                        
                    }
                    else
                    {
                       if (j < k)
                       {
                            if (j < l)
                            {
                                printf("j is min %d" ,j);
                            }
                            else{
                                printf("l is min %d" ,l);
                            }
                            
                       }
                       else{
                            if (k < l)
                            {
                                printf("k is min %d" ,k);
                            }
                            else
                            {
                                printf("l is min %d" ,l);
                            }
                       }
                    }
            }
            
        }
        
    }
    else
    {
        if (g < f)
        {
            if (g < h)
            {
                if (g < i)
                {
                    if (g < j)
                    {
                        if (g < k)
                        {
                            if (g < l)
                            {
                                printf("g is min %d" ,g);
                            }
                            else
                            {
                                printf("l is min %d" ,l);
                            }
                        }
                        else
                        {
                            if (k < l)
                            {
                                printf("k is min %d" ,k);
                            }
                            else
                            {
                                printf("l is min %d" ,l);
                            }
                        }
                    }
                    else
                    {
                        if (j < k)
                        {
                            if (j < l)
                            {
                                printf("j is min %d" ,j);
                            }
                            
                        }
                        else
                        {
                            if (k < l)
                            {
                                printf("k is min %d" ,k);
                            }
                            else
                            {
                                printf("l is min %d" ,l);
                            }
                        }
                        
                    }
                    
                }
                else
                {
                    if (i < j)
                    {
                        if (i < k)
                        {
                            if (i < l)
                            {
                                printf("i is min %d" ,i);
                            }
                            else
                            {
                                printf("l is min %d" ,l);
                            }
                        }
                        else
                        {
                            if (k < l)
                            {
                                printf("k is min %d" ,k);
                            }
                            else
                            {
                                printf("l is min %d" ,l);
                            }
                            
                        }
                    }
                    else
                    {
                        if (j < k)
                        {
                            if (j < l)
                            {
                                printf("k is min %d" ,k);
                            }
                            else
                            {
                                printf("j is min %d" ,j);
                            }
                        }
                        else
                        {
                            if (k < l)
                            {
                                printf("k is min %d" ,k);
                            }
                            else
                            {
                                printf("l is min %d" ,l);
                            }
                        }
                    }
                    
                }
            }
            else
            {
                 if (h < i)
                {
                    if (h < j)
                    {
                        if (h < k)
                        {
                            if (h < l)
                            {
                                printf("h is min %d" ,h);
                            }
                            else
                            {
                                printf("l is min %d" ,l);
                            }
                        }
                        else
                        {
                                if (k < l)
                            {
                                printf("k is min %d" ,k);
                            }
                            else
                            {
                                printf("l is min %d" ,l);
                            }
                        }
                    }
                    else
                    {
                        if (j < k)
                        {
                            if (j < l)
                            {
                                printf("j is min %d" ,j);
                            }
                            else
                            {
                                printf("l is min %d" ,l);
                            }
                        }
                        else
                        {
                              if (k < l)
                            {
                                printf("k is min %d" ,k);
                            }
                            else
                            {
                                printf("l is min %d" ,l);
                            }
                        }
                    }
                }
                else
                {
                     if (i < j)
                    {
                        if (i < k)
                        {
                            if (i < l)
                            {
                                printf("i is min %d" ,i);
                            }
                            else
                            {
                                printf("l is min %d" ,l);
                            }
                        }
                        
                    }
                    else
                    {
                       if (j < k)
                       {
                            if (j < l)
                            {
                                printf("j is min %d" ,j);
                            }
                            else{
                                printf("l is min %d" ,l);
                            }
                            
                       }
                       else{
                            if (k < l)
                            {
                                printf("k is min %d" ,k);
                            }
                            else
                            {
                                printf("l is min %d" ,l);
                            }
                       }
                    }
                }
        }
            
        }
        else
        {
            if (f < h)
            {
                printf("f is min %d" ,f);
            }
            else
            {
                printf("h is min %d" ,h);
            }
        }
    }
}