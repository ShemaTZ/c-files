#include <stdio.h>

int mult(int x, int y, int z);
int main (void)
{
   int x,y,z;

   scanf("%d %d %d",&x, &y, &z);
   printf("%d\n",mult(x,y,z));
}
int mult(int x, int y, int z)
{
    return x * y * z;
}