#include <stdio.h>
#include <math.h>

int main (void)
{
    int a, b, c, k, max;

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d", &k);

    max = (a > b) ? a : b;
    max = (max > c) ? max : c;

    printf("%d\n", a + b + c + max * (int)pow((double)2, (double)k) - max);
}
