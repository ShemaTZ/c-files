#include <stdio.h>

int main(void)
{
    int n, x ,t = 0;
    scanf("%d",&n);

    while (n > 0)
    {
        scanf("%d",&x);
        t = t + x;
        n = n - 1;    
    }

    printf("%d\n",t);
    
    return 0;
}

