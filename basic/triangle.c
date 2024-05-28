#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (x + y <= z || y + z <= x || x + z <= y) {
        printf("impossible\n");
    } else if (x == y && y == z) {
        printf("equilateral\n");
    } else if (x == y || y == z || x == z) {
        printf("isosceles\n");
    } else {
        printf("scalene\n");
    }

    return 0;
}