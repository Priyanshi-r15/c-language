#include <stdio.h>

int main()
{
    int x, y, z;
    float avg;
    int a=3;

    printf("Maths = ");
    scanf("%d" ,&x);
     if (x < 0 )
    {
        printf("enter valid marks");
    }
    else
    {
         printf("English = ");
          scanf("%d" ,&y);
            
            if (y < 0 )
            {
                printf("enter valid marks");
            }
            else 
            {
                printf("Science = ");
                scanf("%d" ,&z);

                 if (z < 0)
                    {
                        printf("enter valid marks");
                    }
                    else
                      {
            avg = x + y + z ;
            float ans = avg/a;
            printf("Average marks = %f",ans);
                }
            }           
    }
}
