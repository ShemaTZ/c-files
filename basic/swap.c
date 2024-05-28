#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[31];
    int n;

    if (scanf("%d %30s", &n, s) == 2) 
    {
        printf("%s %d\n", s, n);
    } else if(scanf("%30s %d",s,&n) == 2)
    {
        printf("%d %s\n", n, s);
    }

    return 0;
}