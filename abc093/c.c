#include <stdio.h>

int main (void)
{
    int a, b, c, max, ax, bx, cx, x, m;
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if (max < b) max = b;
    if (max < c) max = c;

    ax = (max - a) / 2;
    bx = (max - b) / 2;
    cx = (max - c) / 2;

    a = 2 * ax + a;
    b = 2 * bx + b;
    c = 2 * cx + c;

    x = ax + bx + cx;

    max = a;
    if (max < b) max = b;
    if (max < c) max = c;

    m = (max - a);
    m += (max - b);
    m += (max - c);

    if (m == 2) x += 1;
    if (m == 1) x += 2;


    printf("%d\n", x);
}
