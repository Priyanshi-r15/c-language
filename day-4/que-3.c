#include <stdio.h>

int main()
{
    int Firstangle;
    printf("First angle: ");
    scanf("%d" ,&Firstangle);


    int secondangle;
    printf("Second angle: ");
    scanf("%d" ,&secondangle);

    int thirdangle;

    int ans = 180 - (Firstangle + secondangle);

    printf("Third angle: %d",ans);

    return 0;
}