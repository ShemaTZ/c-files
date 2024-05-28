#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[31];
    int age;

    if (scanf("%30s %d", name, &age) == 2 && age >= 0 && age <= 180) {
        printf("%s is %d years old.\n", name, age);
    } else {
        printf("Invalid input format or age range.\n");
    }

    return 0;
}