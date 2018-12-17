#include <stdio.h>

int main (void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a + b == 15) puts("+");
    else if (a * b == 15) puts("*");
    else puts("x");

    return 0;
}
