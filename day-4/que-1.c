#include <stdio.h>

int main()
{
    float C;
    printf("The temperature in Celcuis: ");
    scanf("%f" ,&C);

    float F = (C*(9/5)) + 32;
    
    printf("The Temperature in Fahenheit: %f" ,F);

    return 0;
}