#include <stdio.h>

int inc(int x);

int main (void)
{
    int x; 
    scanf("%d",&x);
    printf("%d\n",inc(x));
}

int inc(int x)
{
   return x + 1;
}