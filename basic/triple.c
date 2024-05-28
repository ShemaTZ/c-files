#include <stdio.h>

int triple(int x);
int main (void)
{
   int x;
   scanf("%d", &x);
   printf("%d\n", triple(x));
}

int triple(int x)
{
    return 3 * x;
}