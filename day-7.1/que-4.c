#include <stdio.h>
 
int main()
{
    int i=1;
    int n;
 
    printf("Enter any Number = ");
    scanf("%d" ,&n);
 
    while (n >= i)
    {
        if (n%2 != 0)
        {
            printf("%d \n" ,n);
        }
        n-- ;
    }
}
