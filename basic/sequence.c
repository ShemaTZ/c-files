#include <stdio.h>

int main (void)
{
    int x,y;
    scanf("%d %d",&x, &y);

    for(int i = x; i <=  y; i++)
    {
        printf("%d\n",x);
        x++;
    }
    
}