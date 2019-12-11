#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int xa, ya, xb, yb, xc, yc;
    double s;

    scanf("%d %d %d %d %d %d", &xa, &ya, &xb, &yb, &xc, &yc);

    s = abs((xb - xa) * (yc - ya) - (yb - ya) * (xc - xa));
    s /= 2;

    printf("%f\n", s);
}
