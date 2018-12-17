#include <stdio.h>

int main (void)
{
    int a, b, c, d, x;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    x = a * 1728 + b * 144 + c * 12 + d;

    printf("%d", x);

    return 0;
}