#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    intmax_t W, H, x, y;
    intmax_t ans = 0;
    double cx, cy;

    scanf("%jd%jd%jd%jd", &W, &H, &x, &y);

    cx = (double)W / 2;
    cy = (double)H / 2;
    if (x == cx && y == cy) ans = 1;

    printf("%f %jd\n", ((double)W * (double)H / 2), ans);

    return 0;
}
