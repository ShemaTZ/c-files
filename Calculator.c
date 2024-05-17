#include <stdio.h>

int main (void)
{
    char operators;
    double num1;
    double num2;
    double result;

    printf("Enter an operator? (+ - * /) ");
    scanf("%c", &operators);

    printf("Enter number 1: ");
    scanf("%lf",&num1);

    printf("Enter number 2: ");
    scanf("%lf",&num2);

    switch (operators)
    {
    case '+':
        result = num1 + num2;
        printf("result: %lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("result: %lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nresult: %lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nresult: %lf", result);
        break;
    default:
        printf("%c Enter valid operators", operators);
        break;
    }
   
return 0;
}