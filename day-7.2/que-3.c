#include <stdio.h>

int main()
{    
    int f; 
    int i=1;
    printf("Enter any Number = ");
    scanf("%d" ,&f);  
    do
    {
       
        if (i%2==0)
        {
            printf("%d \n" ,i);
        }
       
        i++ ;
    } while (i <= f);
}    