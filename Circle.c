#include <stdio.h>

int main (void)
{
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter radius: ");
    scanf("%lf ",&radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\n Circumference: %lf",circumference);
    printf("\n Area: %lf",area);

}