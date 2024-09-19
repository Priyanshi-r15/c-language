#include <stdio.h>

int main()
{
    int r, s;
    printf("Enter a number = ");
    scanf("%d",&r);

    for (int i = 1;  i <= r; i++)
    {
        for (s = 1; s <= 10; s++)
        {
            printf("%d X %d = %d \n" ,i,s,i*s);
        }
        printf("\n");
    }
    
}