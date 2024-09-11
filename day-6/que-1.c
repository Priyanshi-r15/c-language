#include <stdio.h>

int main()
{
    int a, b, c;

    printf("enter a = "); 
    scanf("%d",&a); 

    printf("enter b = "); 
    scanf("%d",&b);  

    printf("enter c = "); 
    scanf("%d",&c); 

    (a < b) ? (a < c) ? printf("a is min %d",a) : printf("c is min %d",c) : (b < c) ? printf("b is min %d",b) : printf("c is min %d",c);
}