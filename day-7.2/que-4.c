#include <stdio.h>

int main()
{
    int v1 = -1, v2 = 1, v3, n ,i;
    printf("Enter any number = ");
    scanf("%d ",&n);

    for (i = 0; i < n; i++)
    {
        v3 = v1 + v2;
        printf("%d ",v3);
        v1 = v2;
        v2 = v3;
    }

    
}