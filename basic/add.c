#include <stdio.h>

int add(int x, int y);
int main (void)
{
   int x,y;

   scanf("%d%d",&x,&y);
   printf("%d\n",add(x,y));
}
int add(int x, int y)
{
    return x + y;
}