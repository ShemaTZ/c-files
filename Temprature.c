#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char unit;
    float temp;

    printf("\nIs the temprature in C or F? ");
    scanf("%c",&unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("\nEnter the temprature in celsius: ");
        scanf("%f",&temp);
        temp = (temp * 9/5) + 32;
        printf("\nThe temp in Farhenite is: %.1f",temp);
    }else if (unit == 'F')
    {
        printf("\nEnter the temprature in farhenite: ");
        scanf("%f",&temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe tem in Ce;sius is: %.1f",temp);
    }
    
    
}