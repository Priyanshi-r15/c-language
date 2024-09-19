#include <stdio.h>

int main()
{
    int start, end;

    printf("Start = ");
    scanf("%d" ,&start);

    printf("End = ");
    scanf("%d" ,&end);

    while (start <= end)
    {
        if (start%4 == 0)
        {
            printf("%d \n" ,start);
        }
        start++ ;
    }
    
}