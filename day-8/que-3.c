#include <stdio.h>
int main()
{
     int r;
    printf("Enter a number = ");
    scanf("%d",&r);

    for (int i = 1;  i <= 10; i++)
    
    {
       printf("%d X %d = %d \n" ,r,i,r*i);
    }
        printf("\n");
}