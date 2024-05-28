#include <stdio.h>
#include <math.h>

int power(int b, int n);

int main (void)
{
    int b, n;
    scanf("%d %d",&b, &n);
    printf("%d\n", power(b, n));
    return 0;
}

int power(int b, int n)
{
    if (n == 1)
    {
        return b;
    }
    else
    {
        return b * pow(b, n - 1);
    }
    
    
    
}