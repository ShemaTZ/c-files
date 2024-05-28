#include <stdio.h>

int volume(int w, int h, int d);
int area(int w, int h, int d);

int main (void)
{
   int w, h, d;

   scanf("%d %d %d",&w, &h, &d);
   printf("The volume of a %d by %d by %d box is %d.\n",w ,h ,d ,volume(w, h, d));
   printf("The surface area of a %d by %d by %d box is %d.\n",w ,h ,d ,area(w, h, d));
}

int volume(int w, int h, int d)
{
    return w * h * d;
}

int area(int w, int h, int d)
{
  return 2 * (d * w + d * h + w * h);
}