#include <stdio.h>

int main(){

    int sum=0 , s;
    printf("Enter s = ");
    scanf("%d",&s);

    for (int i = 1; i <= s ; i++)
    {
       sum = sum + i;
    }
     printf("The sum is = %d",sum);
}