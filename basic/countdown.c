#include <stdio.h>

int main (void)
{
    int n;
    scanf("%d",&n);
    while (n > 0)
    {
        printf("%d\n",n);
        n = n - 1;
    }
    printf("Go!\n");
    
    return 0;
}