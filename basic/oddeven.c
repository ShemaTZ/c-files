#include <stdio.h>

int main (void)
{
    int x;
    scanf("%d",&x);

    if (x % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
    return 0;
}